
/*
Bài 04(thctdlgtbai04.cpp): Cho ma trận số nguyên kích thước mxn chứa trong tệp văn bản 'matran.txt'.
Đọc ma trận từ tệp vào mảng động. Đưa ma trận từ mảng ra màn hình theo định dạng hàng, cột.
Tính tổng và trung bình cộng các phần tử của ma trận.
*/
#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;
//Khai bao ham
void docMT(int* &a,int& n,int& m);
void inMT(int* a, int n,int m);
int tinhTong(int* a, int length);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien, mang
    int n,m;
    int* arr;


    docMT(arr,m,n);

    printf("Ma tran %dx%d : \n",m,n);
    inMT(arr,m,n);

    cout<<"Tong cua ma tran: "<<tinhTong(arr,m*n);

    cout<<"\nTrung binh cong ma tran: "<<tinhTong(arr, m*n)/(m*n);

    return 0;
}
//===Dinh nghia ham===
int tinhTong(int* a, int length){
    int sum = 0;
    for(int i=0; i<length; i++){
	sum += a[i];
    }
    return sum;
}
void docMT(int* &arr, int& n, int& m){
   //Khai bao tep
    ifstream fin("matran.txt");
    //Nhap kich thuoc mang
    fin>>n>>m;
    //Khoi tao mang
    arr = new int[m*n];
    //Doc mang tu tep
    for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    fin>> arr[i*n+j];

	}
   }

}
void inMT(int* arr, int n, int m){
     for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    cout<<arr[i*n+j]<<"\t";
	}
	cout<<endl;
    }


}


//De :
/*
Bài 05(thctdlgtbai05.cpp): Tính tổng 2 ma trận nguyên: Cmxn = Amxn + Bmxn. Ma trận Amxn để trong
tệp văn bản 'matran-A.txt', ma trận Bmxn để trong tệp văn bản 'matran-B.txt'. Ma trận tổng Cmxn
được ghi ra tệp văn bản 'kq-thctdlgtbai05.txt'. Yêu cầu sử dụng mạng động chứa các ma trận,
viết hàm đọc vào ma trận từ tệp, hàm đưa ra ma trận và hàm cộng 2 ma trận.
*/

#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;
//Khai bao ham
void docMT(ifstream &fin, int* &arr, int &n, int &m);
void inMT(int* a, int n, int m);
int congMT(int*a, int* b, int* c, int n, int m);

//===chuong trinh chinh===
int main()
{
    //Khai bao bien
    int m,n;
    int* a;
    int* b;

    ifstream finA("matran-A.txt") ;
     ifstream finB("matran-B.txt");
    ofstream fout("kq-thctdlgtbai05.txt");

    docMT(finA, a, n, m);
    docMT(finB, b, n, m);

    printf("Ma tran A(%dx%d): \n",n,m);
    int MT(a,n,m);



    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
void docMT(ifstream &fin,int* &arr, int&n, int &m ){

    fin>>n>>m;

    arr = new int[m*n];

    //Doc mang tu tep
    for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    fin>> arr[i*n+j];

	}
   }

}
void inMT(int* a, int n, int m){
     for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    cout<<a[i*n+j]<<"\t";
	}
	cout<<endl;
    }

}
void congMT(int* a, int* b,int* c, int n, int m){
    int k;

    c = new int[m*n];
    for(int i = 0; i < m; i++){
	for(int j = 0; j < n; j++){
	    k = i*n+j;
	    c[k] = a[k] + b[k];
	}
    }


}



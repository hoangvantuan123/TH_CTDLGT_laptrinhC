
//De:
/*
Bài 31(thctdlgtbai31.cpp). Cho dãy khóa n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoatangdan.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật
tìm kiếm nhị phân dạng không đệ quy để tìm khóa có giá trị bằng x, nếu tìm thấy thì
trả về vị trí của khóa, nếu không tìm thấy thì trả về 0.

*/
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

//Khai bao ham
int BinarySearch(int *a, int n, int x);

//===chuong trinh chinh===
int main()
{
    //Khai bao tep
    fstream fin("daykhoa.txt");

    //Khai bao mang dong, bien
    int *a, n, m, x;

    //doc kich thuoc mang mang dong
    fin>>n;

    //Tao mang dong co n o nho
    a = new int[n];

    //Doc mang tu tep vao mang dong
    cout <<"Day khoa duoc doc tu tep la \n";
    for(m=0; m<n; m++){
	fin>>a[m];
    cout << a[m]<<" ";
    }
    //Nhap khoa can tim
    cout<<" \n\nNhap khoa can tim: ";
    cin>>x;

    //Dua ra ket qua
    if(BinarySearch(a,n,x))
	cout<<"Khoa can tim tai vi tri "<<BinarySearch(a,n,x)+1;
    else
	cout<<"Khong tim thay khoa! ",x;
    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
int BinarySearch(int *a, int n, int x){
    //Khoi tao
    int L = 0, R = n-1, m;
    //Tim kiem
    while(L <= R){
	//Tinh chi so o giua
	m = (L+R)/2;
        //So sanh
	if( x < a[m])
	    R = m-1;
	else if(x > a[m])
	    L = m+1;
	else
	    return m;
    }
    return 0;
}


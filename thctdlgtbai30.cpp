
//De:
/*
Bài 30(thctdlgtbai30.cpp). Cho dãy khóa n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoa.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật tìm kiếm tuần tự
để tìm khóa có giá trị bằng x, nếu tìm thấy thì trả về vị trí của khóa, nếu không tìm thấy thì
trả về 0.
*/
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

int SenquenceSearch(int *a, int x);

//===chuong trinh chinh===
int main()
{
    ifstream fin("daykhoa.txt");
    int *a, n, x, m;

    fin>>n;
    a = new int[n+1];

    for(m=0; m<n; m++){
	fin>>a[m];
    }

    cout<<"Moi nhap so can tim trong day khoa: ";
    cin>>x;

    if(SenquenceSearch(a, n, x)
	printf("Tim thay %d tai vi tri %d cua day khoa!",x,SenquenceSearch(a, n, x));
    else
	cout<<"Khong tim thay!";


    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
int SenquenceSearch(int *a, int n, int  x){
    int i =1;
    a[n+1] = x;

    while(a[i] != x)
	i++;
    if(i = n+1 )
	return 0;
    else
	return i;

}

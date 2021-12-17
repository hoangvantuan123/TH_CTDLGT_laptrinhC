
//De:
/*B�i 31(thctdlgtbai31.cpp). Cho d?y kh�a t�ng d?n c� n ph?n t? l� c�c s? nguy�n l�u tr? trong
t?p v�n b?n 'daykhoatangdan.txt'. �?c d?y kh�a t? t?p v�o m?ng �?ng. C�i �?t gi?i thu?t
t?m ki?m nh? ph�n d?ng kh�ng �? quy �? t?m kh�a c� gi� tr? b?ng x, n?u t?m th?y th?
tr? v? v? tr� c?a kh�a, n?u kh�ng t?m th?y th? tr? v? 0.
*/

#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

//khai bao ham cai dat giai thuat sap tim kiem nhi phan
int binarySearch(int * k,int n,int x);

//===Chuong trinh chinh===
int main()
{
    //khai bao tep doc vao
    fstream fin("daykhoa.txt");

    //Khai bao bien
    int n;

    //Doc so phan tu cua day khoa tu tep
    fin>>n;

    //Tao mang dong a co n o nho de chua day khoa
    int *a = new int[n];

    //Doc day khoa tu tep vao mang dong va dua ra man hinh
    cout<<"D?y kh�a ban �?u �?c ��?c t? t?p l�:\n";
    for(int i=0;i<n;i++)
    {
	fin>>a[i];
	cout<<a[i]<<"  ";
    }

    //Tim kiem
    int x,kq;

    cout<<"\n\nNh?p v�o kh�a x c?n t?m: ";
    cin>>x;

    kq = binarySearch(a,n,x);

    if(kq) printf("\nKh�a %d c� trong d?y kh�a t?i v? tr� %d.",x,kq);
    else printf("\nKh�a %d kh�ng c� trong d?y kh�a.",x);

    //Huy mang dong
    delete [] a;

    cout<<endl;
    return 0;

}
//===Dinh nghia ham===
int binarySearch(int *k,int n,int x)
{
    //khoi tao
    int L=0,R=n-1;

    //Tim kiem
    while(L<=R)
    {
	//tinh chi so giua
	int m=(L+R)/2;

	//So sanh
    	if(x<k[m]) R=m-1;
	else if(x>k[m]) L=m+1;
	else return m;
    }

    //Khong tim thay
    return 0;
}


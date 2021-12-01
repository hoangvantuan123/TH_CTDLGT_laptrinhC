
//De: Bài 04(thctdlgtbai04.cpp): Cho ma trận số nguyên kích thước mxn chứa trong tệp văn bản 'matran.txt'.
//Đọc ma trận từ tệp vào mảng động. Đưa ma trận từ mảng ra màn hình theo định dạng hàng, cột.
//Tính tổng và trung bình cộng các phần tử của ma trận.


#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//Khai bao ham
void DuaRaMT(int *a,int m,int n);
int tongMT(int *a,int m,int n);

//===chuong trinh chinh===
int main()
{
    //Khai bao tep
    ifstream fin("matran.txt");

    //Khai bao bien
    int m,n,i,j,k;
    int *a; //Tro toi mang dong

    //Doc vao kich thuoc ma tran
    fin>>m>>n;

    //Tao mang dong co m*n o nho
    a = new int[m*n];

    //Doc ma tran tu tep vao mang dong
    for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	{
	    //Tinh chi so o nho
	    k = (i-1)*n + j -1;

	    //Doc phan tu aij luu vao o nho a[k]
	    fin>>a[k];
	}

    //Dua ra ma tran
    cout<<"\nMa trận đọc được từ tệp là:\n";
    DuaRaMT(a,m,n);

    cout<<"\n\nTổng các phần tử của ma trận là: "<<tongMT(a,m,n);
    printf("\nTrung bình cộng các phần tử của ma trận là: %0.1f",(float)tongMT(a,m,n)/(m*n));

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void DuaRaMT(int *a,int m,int n)
{
    int i,j,k;

    for(i=1;i<=m;i++)
    {
	//Dua ra hang i
	for(j=1;j<=n;j++)
	{
	    k = (i-1)*n + j - 1;
	    printf("%6d",a[k]);
	}

	//Xuong dong
	cout<<endl;
    }
}

int tongMT(int *a,int m,int n)
{
    int i,j,k,tong=0;

    for(i=1;i<=m;i++)
	for(j=1;j<=n;j++)
	{
	    //Tinh chi so o nho k
	    k = (i-1)*n + j - 1;
	    tong+=a[k];
	}

    return tong;
}



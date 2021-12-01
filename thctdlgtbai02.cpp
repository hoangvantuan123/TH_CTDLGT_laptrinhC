
//De :
/*Bài 02(thctdlgtbai02.cpp): Tính n! theo giải thuật đệ quy.*/

#include<iostream>
#include<stdio.h>

int dequy(int n);
using namespace std;

//===chuong trinh chinh===
int main()
{
    int n;
    cout<<"Moi nhap so nguyen n > 0: ";
    cin>>n;
    if( n>=0){
	printf("%d! = %d\n",n,dequy(n));
    }else{
	cout<<"So nhap khong hop le"<<endl;
    }

    return 0;
}
//===Dinh nghia ham===
int dequy(int n){
    if(n<=1){
	return 1;
    }else{
	return n*dequy(n-1);
    }

}

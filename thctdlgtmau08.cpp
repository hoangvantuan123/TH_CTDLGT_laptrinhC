
/*
 Bai 08
*/
#include<iostream>
#include<stdio.h>

using namespace std;

#define N 8

//Khai bao cau truc gop 2 bien S va T
struct Stack
{
    int T;
    char S[N];
};

//Khai bao ham cai dat cac phep toan tren ngan xep
void push(Stack &ST,char x);
char pop(Stack &ST);
bool isEmpty(Stack ST);

int main()
{
    //Cai dat cau truc luu tru ke tiep cua ngan xep
    Stack ST={-1};

    //Khai bao bien
    int n,thuong,du;

    //Nhap n
    cout<<"Nhap vao so nguyen duong: ";cin>>n;

    //Chuyen n sang he 16
    thuong=n;
    while(thuong)
    {
	du = thuong%16;
	thuong/=16;

	//Chuyen so du thanh chu so he 16 roi day vao ngan xep
	if(du<10)push(ST,du+48);
	else push(ST,du+55);
    }

    //Dua ra ket qua
    cout<<"So he 16 cua "<<n<<" la: ";
    while(!isEmpty(ST)) cout<<pop(ST);

    cout<<endl;
    return 0;
}
///===dinh nghia ham===
void push(Stack &ST,char x)
{
    //1.Kiem tra day
    if(ST.T == N-1)
    {
	cout<<"Ngan xep day!";
	return;
    }

    //2-3.Tang T len 1 va dua x vao ngan xep
    ST.S[++ST.T] = x;
}

char pop(Stack &ST)
{
    //1.Kiem tra rong
    if(ST.T == -1)
    {
	cout<<"Ngan xep rong!";
	return 1;
    }

    //2-3-4.Tra ve phan tu dinh va giam T di 1
    return ST.S[ST.T--];
}

bool isEmpty(Stack ST)
{
    return ST.T == -1;
}



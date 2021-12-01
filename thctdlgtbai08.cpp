
/*
Bài 08(thctdlgtbai08.cpp): Cài đặt cấu trúc dữ liệu ngăn xếp sử dụng
cấu trúc lưu trữ kế tiếp với phần tử dữ liệu là ki tu. Sử dụng ngăn xếp chuyển
một số nguyên dương hệ 10 sang hệ 16.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

#define N 32
//Khai bao lop
struct Stack
{
    int S[N];
    int T;
};

//Khai bao ham
void push(const char &x, Stack* s);
char pop(Stack* &s);
bool isEmpty(Stack* s);

//===chuong trinh chinh===
int main()
{
    //Tao doi tuong ngan xep
    struct Stack S;

    //Khai bao bien
   /* int n,thuong;

    cout<<"Nhập vào một k: "; cin>>n;

    //Chuyen he 10 thanh he 2
    thuong=n;
    while(thuong)
    {
	S.push(thuong%2);
	thuong/=2;
    }

    cout<<"Số nhị phân của "<<n<<" là: ";;
    while(!S.isEmpty()) cout<<S.pop();
*/
    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void push(const char  &x, Stack* s)
{
    //1.Kiem tra day
    if(s->T==s->size-1)
    {
	cout<<"Ngăn xếp đã đầy!";
	return;
    }

    //2.Bổ sung x vào ngăn xếp
 //   s->aray[++s->T]=x;
    printf("%d pushed to stack\n", x);
}

char pop(Stack* s)
{
    //1.Kiem tra rong
    if(s->T==-1)
    {
	cout<<"Ngăn xếp đã rỗng!";
	return 1;
    }

    //2.Lay va tra ve phan tu dinh
   // return s->array[s->T--];
}

bool isEmpty(Stack* s)
{
    return s->T==-1;
}



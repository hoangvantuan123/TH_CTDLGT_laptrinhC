
//De:
/*
Bài 16(thctdlgtbai16.cpp): Cài đặt ngăn xếp sử dụng cấu trúc lưu trữ phân tán với phần tử dữ liệu
là số nguyên. Ứng dụng ngăn xếp cho bài toán tìm và đưa ra các số nguyên tố nhỏ hơn n theo thứ tự
giảm dần.
*/
#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Khai bao cau truc nut nho cua ngan xep
struct node
{
    int infor;
    node* link;
};

//Khai bao ham cai dat phep toan tren ngan xep
void push(node* &T,int x);
int pop(node* &T);
bool isEmpty(node* T);

//Khai bao ham thong thuong
bool isPrime(int x);

//===chuong trinh chinh===
int main()
{
    //Cai dat cau truc luu tru phan tan cua ngan xep
    node *T=NULL;

    //Khai bao bien
    int n;

    //Nhap n
    cout<<"Nhap vao so nguyen duong n: ";
    cin>>n;

    //Tim cac so nguyen to < n, tu nho toi lon
    for(int i=2;i<n;i++)
	if(isPrime(i))
	    push(T,i);

    //Dua ra ket qua
    cout<<"Cac so nguyen to < "<<n<<" la:\n";
    while(!isEmpty(T)) cout<<pop(T)<<"  ";

    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void push(node* &T,int x)
{
    //1.Tao nut moi
    node*N = new node;
    N->infor=x;
    N->link=NULL;

    //2.Noi nut moi vao tren nut T
    N->link=T;

    //3.Cho T tro sang nut moi
    T=N;
}

int pop(node* &T)
{
    //Kiem tra rong
    if(T==NULL)
    {
	cout<<"Ngan xep rong.";
	return 1;
    }

    //Giu lai nut dinh
    int tg = T->infor;
    node *P = T;

    //Cho T tro xuong nut duoi
    T=T->link;

    //Huy nut dinh va tráº£ vá» pháº§n tá»­ Ä‘Ã£ loáº¡i bo
    delete P;
    return tg;
}

bool isEmpty(node* T)
{
    return T==NULL;
}

bool isPrime(int x)
{
    for(int i=2;i<=(int)sqrt(x);i++)
	if(x%i==0) return 0;

    //x la nguyen to
    return 1;
}


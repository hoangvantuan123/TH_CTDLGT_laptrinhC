
//De:
/*Bài 16(thctdlgtbai16.cpp): Cài đặt ngăn xếp sử dụng cấu trúc lưu trữ phân tán với phần tử dữ liệu
là số nguyên. Ứng dụng ngăn xếp cho bài toán tìm và đưa ra các số nguyên tố nhỏ hơn n theo thứ tự
giảm dần.
*/
#include<iostream>
#include<stdio.h>
#include<math.h>

struct node{
    int infor;
    node *link;
};

void push(node* &T,int x);
int pop(node* &T);
bool isEmpty(node* T);
node* top(node* T);

//Khai bao ham thong thuong
bool isPrime(int n);
using namespace std;

//===chuong trinh chinh===
int main()
{
    //Cai dat cau truc luu tru phan tan cua ngan xep
    node *T=NULL;
    //Khai bao bien
    int n;
    cout<<"Nhap so nguyen duong n:";
    cin>>n;
    //tim cac snt < n, tu nho toi lon
    for(int i=2;i<=n;i++){
	if(isPrime(i))
	    push(T,i);

    }
    //Dua ra kq
    cout<<"Cac so nguyen to < "<<n<<" la:\n";
    while(!isEmpty(T))
	cout<<pop(T)<<" ";

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===

void push(node* &T,int x){
    //tao nut moi
    node *N = new node;
    N->infor = x;
    N->link = NULL;

    //Noi nut moi vao tren nut T
    N->link == T;

    //cho T tro sang nut moi
    T = N;
}
int pop(node* &T){
    if(isEmpty(T)){
	cout<<"Ngan xep rong"<<endl;
	return 0;
    }else{
	//giu lai nut dinh
	int tg = T->infor;
	node *P =T;

	//Cho t xuong nut duoi
	T = T->link;

	//huy nut
	delete P;

	return tg;
    }




}
bool isEmpty(node* T){
    return T==NULL;
}
node* top(node* T){
    if(T==NULL){
	cout<<"Ngan xep rong"<<endl;
	return 0;
    }else
	//return T->infor;
	return 0;
}
bool isPrime(int x){
    for(int i =2; i<=(int)sqrt(x);i++){
    if(x%i == 0) return 0;
	    }
	    return 1;

}


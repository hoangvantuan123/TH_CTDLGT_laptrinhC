//Ho ten: Le Tuan Tu
//MaSV: 652231
//Lop: K65CNTTB
//De: 
/*
Cài đặt cấu trúc dữ liệu cây nhị phân có phần tử là ký tự.
Ứng dụng cây đã cài đặt để lưu trữ biểu thức: (a+b)*(c-d) + e/(f-g).
Đưa ra biểu thức dạng tiền tố và hậu tố.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

//Khai bao kieu cau truc nut nho cua cay nhi phan
struct node
{
    char infor;
    node *left,*right;
};

//Khai bao ham cai dat cac phep toan tren cay nhi phan
void preOrder(node *T);
void inOrder(node *T);
void postOrder(node *T);

//===chuong trinh chinh===
int main()
{
    //Cai dat cau truc luu tru phan tan cua cay nhi phan
    node *T=NULL;

    //Thu voi bieu thuc a + b
    //Tao nut goc
    T = new node;
    T->infor = '+';
    T->left = T->right = NULL;

    //Tao nut con trai
    T->left = new node;
    T->left->infor = 'a';
    T->left->left = T->left->right = NULL;

    //Tao nut con phai
    T->right = new node;
    T->right->infor = 'b';
    T->right->left = T->right->right = NULL;

    //Duyet cay
    cout<<"Duyet cay theo thu tu truoc dua ra bieu thuc dang tien to:\n";
    preOrder(T);
    cout<<"\n\nDuyet cay theo thu tu truoc dua ra bieu thuc dang tien to:\n";
    postOrder(T);
    
    cout<<endl;
    return 0;
}
//===dinh nghia ham===
void preOrder(node *T)
{
    if(T==NULL) return;

    cout<<T->infor<<"  ";
    preOrder(T->left);
    preOrder(T->right);
}

void inOrder(node *T)
{
    if(T==NULL) return;

    inOrder(T->left);
    cout<<T->infor<<"  ";
    inOrder(T->right);
}

void postOrder(node *T)
{
    if(T==NULL) return;

    postOrder(T->left);
    postOrder(T->right);
    cout<<T->infor<<"  ";
}



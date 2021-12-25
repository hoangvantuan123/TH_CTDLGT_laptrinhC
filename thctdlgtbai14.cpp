
//De:
/*
Bài 14(thctdlgtbai14.cpp): Cài đặt danh sách liên kết kép có phần tử dữ liệu là số nguyên, với các
phép toán sau:
    1) Bổ sung phần tử dữ liệu x vào sau nút M
    2) Bổ sung phần tử dữ liệu x vào trước nút M
    3) Xóa nút M
    4) Duyệt danh sách để đưa các phần tử dữ liệu ra màn hình từ trái sang phải hoặc từ phải sang trái.
    5) Tìm một nút có phần tử dữ liệu bằng x, nếu có trả về địa chỉ nút, nếu không có trả về rỗng.
Sử dụng danh sách liên kết kép để lưu trữ dãy số nguyên theo thứ tự đọc vào
từ tệp văn bản 'daysonguyen.txt', trên tệp không có thông tin về số phần tử của dãy số.
Đưa dãy số nguyên trong DSLKK ra màn hình theo thứ tự từ trái sang phải và từ phải sang trái.
Xóa tất cả các nút mà có phần tử dữ liệu bằng x nhập vào từ bàn phím.
*/

#include<iostream>
#include<stdio.h>
//Khai bao kieu cau truc nut nho cua DSLKK
struct node
{
    int infor;
    node *left,*right;
};
//Gop 2 bien con tro
struct DList{
    node *L,*R;
};
//Khai bao cai dat cac phep toan tren DSLKK
node* DLPostInsert(node* &F,node *M,int x);
node* DLPreInsert(node* &F,node *M,int x);
void DLDelete(node* &F,node *M);
void DLDisplay(node *F);
node* DLSearch(node *F,int x);


using namespace std;

//===chuong trinh chinh===
int main()
{

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===
node* DLPostInsert(node* &F,node *M,int x){
    //Tao nut moi chua phan tu x
    node *N=new node;
    N->infor = x;
    N->left = NULL;
    N->right = NULL;

    //Noi nut moi vao sau nut M trong DSLKD
    if(F==NULL) F=N;
    else
    {
	N->L = M->R;
	M->R = N->L;
    }

    //Tra ve dia chi nut moi bo sung
    return N;

}
node* DLPreInsert(node* &F,node *M,int x){

    node *N = new node;
    N->infor = x;
    N->left = N->right = NULL;


}
void DLDelete(node* &F,node *M){

}
void DLDisplay(node *F){

}
node* SLSearch(node *F,int x){

}



//Ho ten: Le Tuan Tu
//MaSV: 652231
//Lop: K65CNTTB
//De: 
/*
Cài đặt cấu trúc dữ liệu cây nhị phân có phần tử là số nguyên.
Ứng dụng tạo cây nhị phân tìm kiếm cho dãy khóa k có n phần tử là
các số nguyên đọc vào từ tệp văn bản “daykhoa.txt”.
Tìm khóa trên có giá trị bằng x, nếu không tìm thấy thì bổ sung x trở thành khóa trên cây,
cho biết x có trên cây hay không.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//Khai bao kieu cau truc nut nho cua cay nhi phan
struct node
{
    int infor;
    node *left,*right;
};

//Khai bao ham cai dat cac phep toan tren cay nhi phan
void preOrder(node *T);
void inOrder(node *T);
void postOrder(node *T);

//Khai bao ham cai dat giai thuat tim kiem nhi phan tren cay
node* BST(node* &T,int x);

//===chuong trinh chinh===
int main()
{
    //Cai dat cau truc luu tru phan tan cua cay nhi phan
    node *T=NULL;

    //Khai bao tep vao
    ifstream fin("daykhoa.txt");

    //Khai bao bien
    int n,x;

    //Doc so luong khoa tu tep
    fin>>n;

    //Doc day khoa tu tep va tao cay nhi phan tim kiem
    for(int i=0;i<n;i++)
    {
	fin>>x;
	BST(T,x);
    }

    cout<<"Day khoa tren cay nhi phan tim kiem theo thu tu tang dan la:\n";
    inOrder(T);

    cout<<"\n\nNhap vao khoa x can tim: ";
    cin>>x;

    if(BST(T,x))
	cout<<"\nKhoa "<<x<<" co tren cay nhi phan tim kiem.";
    else
    {
	cout<<"\nKhoa "<<x<<" khong co tren cay nhi phan tim kiem, da bo sung vao cay.";
	cout<<"\nDay khoa tren cay nhi phan tim kiem sau khi bo sung la:\n";
	inOrder(T);
    }

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

node* BST(node* &T,int x)
{
    //1.Khoi tao
    node *p=NULL,*q=T;

    //2.Tim kiem
    while(q)
    {
	if(x < q->infor)
	{
	    p = q; q = q->left;
	}
	else if(x > q->infor)
	{
	    p = q; q = q->right;
	}
	else return q;
    }

    //3.Khong tim thay x, bo sung x vao thanh khoa tren cay
    q = new node;
    q->infor = x;
    q->left = q->right = NULL;

    if(T==NULL) T = q;
    else if(x<p->infor) p->left = q;
    else p->right = q;

    return NULL;
}



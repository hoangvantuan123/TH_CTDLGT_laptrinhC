// ho ten : Hoang Van Tuan
//Lop :K65CNTTA
// Ma SV :650024
//DE :
/*
Cài đặt cấu trúc dữ liệu danh sách liên kết đơn (DSLKD) có phần tử là số ngu    yên với bốn phép toán:
   1) Bổ sung phần tử x vào sau nút M
  2) Loại bỏ nút M
  3) Duyệt DSLKD
 4) Ghép hai danh sách

*/
#include <iostream>
#include <stdio.h>
using namespace std;
struct node
{
    int infor;
    node *link;
};
// khai bao ham cai dat cac pheps toan
void SLPostInsert(node *&F, node *M, int x);
void SLDelete(node *&F, node *M);
void SLDisplay(node *F);
void SLConcat(node *&P, node *Q);
int main()
{
    // cai dat cau truc lu tru phan tan DSLKD
    node *F = NULL;
    cout << endl;
    return 0;
}

//=== Dinh nghia ham ===

void SLPostInsert(node *&F, node *M, int x)
{
    //1.tao nut nho moi chua x
    node *N = new node;
    N->infor = x;
    N->link = NULL;
    // 2. Noi nut moi vao sau nut M
    if (F == NULL)
        F = N;
    else
    {
        N->link = M->link;
        M->link = N;
    }
}

void SLDelete(node *&F, node *M)
{
    //1.truong hop danh sach rong
    if (F = NULL)
    {
        node *N = F;
        // luu gia tri cua node
        F = N->link;
        delete N;
        if (F == NULL)
            M == NULL;
    }
}


/*
Bài 12(thctdlgtbai12.cpp): Cài đặt danh sách liên kết đơn có phần tử dữ liệu là số nguyên, với các
phép toán sau:
    1) Bổ sung phần tử dữ liệu x vào sau nút M
    2) Bổ sung phần tử dữ liệu x vào trước nút M
    3) Xóa nút M
    4) Duyệt danh sách để đưa các phần tử dữ liệu ra màn hình.
    5) Tìm một nút có phần tử dữ liệu bằng x, nếu có trả về địa chỉ nút, nếu không có trả về rỗng.
Sử dụng danh sách liên kết đơn P để lưu trữ dãy số nguyên theo thứ tự đọc vào
từ tệp văn bản 'daysonguyen.txt', trên tệp không có thông tin về số phần tử của dãy số.
Tạo danh sách liên kết đơn Q bao gồm các phần tử dữ liệu của P nhưng theo thứ tự đảo ngược.
Xóa một nút trên DSLK đơn P mà có phần tử dữ liệu bằng x nhập vào từ bàn phím.
*/

#include <iostream>
#include <stdio.h>
#include <fstream>

//Khai bao kieu cau truc nut nho cua DSLKD
struct node
{
    int infor;
    node *link;
};

//Khai bao cai dat cac phep toan tren DSLKD
node *SLPostInsert(node *&F, node *M, int x);
node *SLLPreInsert(node *&F, node *M, int x);
void SLPDelete(node *&F, node *M);
void SLDisplay(node *F);
node *SLSearch(node *F, int x);

//===chuong trinh chinh===
int main()
{
    //Cai dat cau truc luu tru cua DSLKD
    node *P = NULL, *Q = NULL, *M;
    int x;
    cout << "lz";
    ifstream fin("tamgiac.txt");
    fin >> x;
    cout << x;
    while (fin >> x)
    {
        M = SLPostInsert(P, M, x);
    }
    //getchar();

    cout << "Day so trong DSLKD P la: ";

    SLDisplay(P);
    cout << endl;
    return 0;
}
//===dinh nghia ham===
node *SLPostInsert(node *&F, node *M, int x)
{
    //Tao nut moi chua phan tu x
    node *N = new node;
    N->infor = x;
    N->link = NULL;

    //Noi nut moi vao sau nut M trong DSLKD
    if (F == NULL)
        F = N;
    else
    {
        N->link = M->link;
        M->link = N;
    }
    //Tra ve dia chi nut bo sung
    return N;
}

node *SLPreInsert(node *&F, node *M, int x)
{
    //Tao nut chua phan tu x
    node *N = new node;
    N->infor = x;
    N->link = NULL;

    //Noi nut moi vao truoc nut M trong DSLKD
    if (F == NULL)
        F = N;
    else if (M == F)
    {
        N->link = M;
        F = N;
    }
    else
    {
        //Tim den nut P dung truoc nut M
        node *P = F;
        while (P->link != M)
            P = P->link;

        //Noi nut moi vao truoc nut M
        P->link = N;
        N->link = M;
    }
    return N;
}

void SLPDelete(node *&F, node *M)
{
    //1.Truong hop rong
    if (F == NULL)
    {
        cout << "Danh sach lien ket don da rong.";
        return;
    }

    //2.Ngat ket noi voi nut M
    if (M == F)
        F = F->link;
    else
    {
        //Tim den nut P truoc nut M
        node *P = F;
        while (P->link != M)
            P = P->link;

        //Noi nut truoc M voi nut sau M
        P->link = M->link;
    }

    //3.Huy nut M
    delete M;
}

void SLDisplay(node *F)
{
    while (F)
    {
        cout << F->infor << " ";
        F = F->link;
    }
}

node *SLSearch(node *F, int x)
{
    //Tim nut P co phan tu bang x
    node *P = F;
    while (P)
        if (P->infor == x)
            break;
        else
            P = P->link;

    //Tra ve ket qua
    return P;
}

/*  Bài 15(thctdlgtbai15.cpp): Cài đặt và sử dụng danh sách liên kết kép cho bài toán sau:
  Đọc danh sách mặt hàng từ tệp văn bản 'mathang.txt' lưu vào DSLKK, mỗi mặt hàng có thông tin
  về mã hàng, tên hàng, số lượng, đơn giá. Đưa danh sách mặt hàng ra màn hình kèm theo
  số tiền của từng mặt hàng và tổng số tiền của tất cả mặt hàng.
  Xóa mặt hàng có mã nhập vào từ bàn phím.
1  */
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

//Khai bao kieu phan tu du lieu cua DSLKK
struct MatHang
{
    char maHang[11];
    char tenHang[31];
    int soLuong;
    float donGia;
};

//Khai bao cau truc nut nho cua DSLKK
struct node
{
    MatHang infor;
    node *left, *right;
};

//Khai bao ham cai dat cac phep toan tren DSLKK
void DLLastInsert(node *&L, node *&R, MatHang x);
void DLDisplay(node *L, node *R);
float DLGetSum(node *L, node *R);
bool DLDelete(node *&L, node *&R, const char *maHang);

//===chuong trinh chinh===
int main()
{
    //Cai dat cua truc luu tru phan tan cua DSLKK
    node *L = NULL, *R = NULL;

    //Khai bao tep vao
    ifstream fin("mathang.txt");

    //Khai bao bien
    int n;
    MatHang x;
    char maHang[11];
    char tg[3];
    //Doc so luong mat hang tu tep
    fin >> n;

    //Doc danh sach n mat hang tu tep vao DSLKK
    for (int i = 0; i < n; i++)
    {
        //Doc ky tu Enter de dua con tro xuong dong duoi
        fin.getline(tg, sizeof(tg));

        //Doc va tach thong tin cua mat hang
        fin.getline(x.maHang, sizeof(x.maHang), '\t');
        fin.getline(x.tenHang, sizeof(x.tenHang), '\t');
        fin >> x.soLuong >> x.donGia;

        //Dua mat hang x vao cuoi DSLKK
    }
    //Dua ra
    cout << "Danh sach mat hang trong DSLKK la:\n";
    DLDisplay(L, R);
    printf("\nTong tien cua %d mat hang la: %0.1f", n, DLGetSum(L, R));
    cout << "\n\nNhap vao ma mat hang can xoa: ";
    cin >> maHang;
    if (DLDelete(L, R, maHang))
    {
        cout << "\nDa xoa mat hang " << maHang << " trong DSLKK.";
        cout << "\nDanh sach mat trong DSLKK sau khi xoa la:\n";
        DLDisplay(L, R);
    }
    else
        cout << "\nTrong DSLKK khong co ma mat hang " << maHang;

    cout << endl;
    return 0;
}
//===dinh nghia ham===
void DLLastInsert(node *&L, node *&R, MatHang x)
{
    //1.Tao nut nho moi chua x
    node *N = new node;
    N->infor = x;
    N->left = N->right = NULL;

    //2.Noi nut moi vao cuoi DSLKK (sau nut R)
    if (R == NULL)
        L = R = N;
    else
    {
        R->right = N;
        N->left = R;
        R = N;
    }
}

void DLDisplay(node *L, node *R)
{
    node *P = L;
    while (P)
    { //Dua ra mat hang trong P
        cout << "\n\tMa mat hang: " << P->infor.maHang;
        cout << "\n\tTen mat hang: " << P->infor.tenHang;
        cout << "\n\tSo luong: " << P->infor.soLuong;
        cout << "\n\tDon gia: " << P->infor.donGia;
        printf("\n\tThanh tien: %0.1f\n", P->infor.soLuong * P->infor.donGia);
        //Cho P tro sang nut dung sau
        P = P->right;
    }
}

float DLGetSum(node *L, node *R)
{
    float tongTien = 0;
    node *P = L;

    //Tinh tong tien cua danh sach mat hang trong DSLKK
    while (P)
    {
        //Tinh tong tien
        tongTien += P->infor.soLuong * P->infor.donGia;

        //Cho P tro sang nut tiep theo
        P = P->right;
    }

    //Tra ve tong tien
    return tongTien;
}
bool DLDelete(node *&L, node *&R, const char *maHang)
{ //Tim nut M co ma mat hang bang ma mat hang truyen vao
    node *M = L;
    while (M)
        if (strcasecmp(M->infor.maHang, maHang) == 0)
            break;
        else
            M = M->right;
    //Truong hop khong tim thay
    if (M == NULL)
        return 0;
    //Xoa nut M
    //Ngat ket noi voi nut M
    if (L == R)
        L = R = NULL;
    else if (M == L)
    {
        L = L->right;
        L->left = NULL;
    }
    else if (M == R)
    {
        R = R->left;
        R->right = NULL;
    }
    else
    {
        M->left->right = M->right;
        M->right->left = M->left;
    } //Huy nut M
    delete M;
    return 1;
}
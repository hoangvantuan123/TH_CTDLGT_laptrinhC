
//De :
/*
Bài 11(thctdlgtbai11.cpp): Cài đặt cấu trúc dữ liệu hàng đợi sử dụng
cấu trúc lưu trữ kế tiếp theo kiểu quay vòng. Sử dụng hàng đợi cho bài toán:
Có một tệp danh sách sinh viên, mỗi sinh viên có thông tin gồm mã sv, họ tên, giới tính, điểm tbc.
Danh sách sinh viên trên tệp đã được sắp xếp theo điểm tbc giảm dần.
Ghi lại tệp sao cho tất cả sinh viên nữ ở đầu danh sách, tất cả sinh viên nam ở cuối danh sách,
điểm tbc vẫn giảm dần trong nhóm nam và nữ.
*/

#include <iostream>
#include <stdio.h>

#define N 8

using namespace std;

//Khai bao cau truc
struct SinhVien
{
    int MaSV;
    char hoTen;
    float diem;
} struct Queue
{
    int Q[N];
    int F;
    int R;
};

//Khai bao phep toan
void CQInsert(int x, Queue &Q);
int CQDelete(Queue &Q);
bool isEmpty(Queue Q);

//===chuong trinh chinh===
int main()
{

    cout << endl;
    return 0;
}
//===Dinh nghia ham===
void CQInsert(int x, Queue &Q)
{
    if (Q.F == 1 && Q.R == N || Q.R + 1 == Q.F)
    {
        cout << "Hang doi da day! " << endl;
        return
    }
    if (Q.F == Q.R && Q.R == 0)
    {
        Q.F = 1;
        Q.R = 1;
    }
    else
    {
    }
}
int CQDelete(Queue &Q)
{
}
bool isEmpty(Queue Q)
{
}

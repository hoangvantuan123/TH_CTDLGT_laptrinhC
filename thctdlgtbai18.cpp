
/*
Bài 18(thctdlgtbai18.cpp): Cài đặt và sử dụng hàng đợi lưu trữ phân tán cho bài toán sau:
Cho tệp văn bản 'dathuc.txt' chứa đa thức tuyến tính bậc n. Đọc tệp, đưa ra màn hình đa thức bậc n
theo dạng Pn(x) = a0 + a1x + a2x^2 + a3x^3 +...+ anx^n. Nhập vào x, tính Pn(x).
*/
#include<iostream>
#include<stdio.h>
using namespace std;
//so hang a, so mu x
struct infor{
    int a;
    int x;
};
struct node{
    infor n;
    node *link;
};
struct Queue{
    node *F,*R;
};

void QInsirt(Queue* &Q, infor x);
int QDelete(Queue* &Q);
bool QIsEmpty(Queue Q);


//===chuong trinh chinh===
int main()
{

    cout<<endl;
    return 0;
}
//===Dinh nghia ham===


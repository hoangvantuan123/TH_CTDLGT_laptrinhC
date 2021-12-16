/*
Bài 27(thctdlgtbai27.cpp). Cho dãy khóa n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoa.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật sắp xếp nhanh
để sắp xếp dãy khóa trong mảng động tăng dần. Đưa dãy khóa ban đầu và dãy khóa đã sắp xếp
ra màn hình.

*/
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

//Khai bao ham cai dat giai thuat
void quickSort(int *a, int L, int R);

//===chuong trinh chinh===
int main()
{
    ifstream fin("daykhoa.txt");
    int *a, n, m;

    fin >> n;

    a = new int[n];

    cout << "Day khoa tu tep: ";

    for (m = 0; m < n; m++)
    {
        fin >> a[m];
        cout << "\t" << a[m];
    }
    quickSort(a, 0,n-1);

    cout << "\nDay khoa sau khi sap xep la: ";
    for (m = 0; m < n; m++)
    {

        cout << "\t" << a[m];
    }

    cout << endl;
    return 0;
}
//===Dinh nghia ham===
void quickSort(int *a, int L, int R)
{
     if (L >= R) // Khi d� m?ng c� 0 ph?n t?, d?ng
          return;
     else
     {
          int x = a[R];   //Chon phan tu cuoi lam chot
          int j = R - 1;  // Phan tu thu 2 tu ben phai manr
          int i = L;        // i la phan tu dau tien
          while (true)
          {
               // Trong khi a[i] nho hon x, tang i len
               while (a[i] < x && i <= j) i++;

               // Trong khi a[j] lon hon x, giam j xuong
               while (a[j] > x && j >= i) j--;
              // Sau 2 vong lap while a[i] > x va a[j] < x
               if (i >= j)                    // neu i vuot qua j thi ta cho dung lai
                   break;
               swap(a[i], a[j]);             // Đổi chỗ cho phần tử nhỏ hơn về j, lớn hơn về phải x
               i++;                     // roi ta xet i tang len cung luc do ta cho j giam  xuong
               j--;
          }
           swap(a[i], a[R]);        // doi cho x ve giua mang
           quickSort(a, L, i - 1);   //de quy ve trai
           quickSort(a, i + 1, R);   // de quy ve phai
     }
}

/*
Bài 26(thctdlgtbai26.cpp). Cho dãy khóa n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoa.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật sắp xếp sủi bọt
để sắp xếp dãy khóa trong mảng động tăng dần. Đưa dãy khóa ban đầu và dãy khóa đã sắp xếp
ra màn hình.

*/
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

//Khai bao ham cai dat giai thuat chon
void adjust(int *a, int i, int n);
void heapSort(int *a, int n);
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
    heapSort(a, n);

    cout << "\nDay khoa sau khi sap xep la: ";
    for (m = 0; m < n; m++)
    {

        cout << "\t" << a[m];
    }

    cout << endl;
    return 0;
}
//===Dinh nghia ham===
void adjust(int *a, int i, int n)
{
    // 1. Khởi đâù

   int key = a[i];
    int j = 2 * i;

    // 2. Chon con ung voi khoa lon nhat trong 2 con của i
    while (j <= n)
    {
        if (j < n && a[j] < a[j + 1])
            j= j + 1;
        // 3.

        if (key > a[j])
        break;
        {
            a[j / 2] =key;

        }
        a[j / 2] = a[i];
        j = 2*j;
    }
        swap(a[j/2], a[i]);


}
void heapSort(int *a, int n)
{
    int tmp;
    for (int i = n / 2 - 1; i >= 0; i--)
        adjust(a, n, i);
    for (int i = n - 1; i >= 2; i--)
    {
      tmp = a[0];
      a[0] = a[i];
      a[i] = tmp;
      adjust(a, i , 0);

    }
}
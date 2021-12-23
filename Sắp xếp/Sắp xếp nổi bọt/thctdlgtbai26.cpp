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

//Khai bao ham cai dat giai thuat noi bot
/* void swap(int &x, int &y); */
void bubbleSort(int *a, int n);

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
    bubbleSort(a, n);

    cout << "\nDay khoa sau khi sap xep la: ";
    for (m = 0; m < n; m++)
    {

        cout << "\t" << a[m];
    }

    cout << endl;
    return 0;
}
//===Dinh nghia ham===
/* void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
} */
void bubbleSort(int *a, int n)
{
    int i, j;
    for (int i = 0; i < n - 2; i++)
        for (int j = n - 1; j > i; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
/*
Bài 24(thctdlgtbai24.cpp). Cho dãy khóa n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoa.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật sắp xếp chọn
để sắp xếp dãy khóa trong mảng động tăng dần. Đưa dãy khóa ban đầu và dãy khóa đã sắp xếp
ra màn hình.

*/
#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

//Khai bao ham cai dat giai thuat chon
void selectionSort(int *a, int n);

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
    selectionSort(a, n);

    cout << "\nDay khoa sau khi sap xep la: ";
    for (m = 0; m < n; m++)
    {

        cout << "\t" << a[m];
    }

    cout << endl;
    return 0;
}
//===Dinh nghia ham===
void selectionSort(int *a, int n)
{
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++)
    {
        //Tìm phần tử nhỏ nhất ở vị trí k
        k = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[k])
                k = j;
        }
        //đổi chỗ phần tử nhỏ nhất ở vị trí k cho vị trí i
        if (k != i)
            temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
}
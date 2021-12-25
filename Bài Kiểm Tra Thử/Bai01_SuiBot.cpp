/* Bài 1 : Cài đặt giải thuật sắp xếp sủi bọt(bubbleSort) để sắp xếp danh sách các tỉnh (thành phố) theo dân
số giảm dần. Mỗi tỉnh có thông tin về tỉnh, diện tích, dân số, danh sách n tỉnh đọc vào mảng động từ tệp
văn bản "tinh.txt".Đưa ra màn hình danh sách các tỉnh ban đầu và sau khi sắp xếp.
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
    ifstream fin("tinh.txt");
    int *a, n, m;

    fin >> n;

    a = new int[n];

    cout << "Danh sach duoc doc tu tep la: ";

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

void bubbleSort(int *a, int n)
{
    int i, j;
    for (int i = 0; i < n - 2; i++)
        for (int j = n - 1; j > i; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}
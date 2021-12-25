/* Bài 1 : Cài đặt giải thuật sắp xếp sủi bọt(bubbleSort) để sắp xếp danh sách các tỉnh (thành phố) theo dân
số giảm dần. Mỗi tỉnh có thông tin về tỉnh, diện tích, dân số, danh sách n tỉnh đọc vào mảng động từ tệp
văn bản "tinh.txt".Đưa ra màn hình danh sách các tỉnh ban đầu và sau khi sắp xếp.
 */

#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

//Khai bao ham cai dat giai thuat sui bot
void bubbleSort(int *a, int n);

//===chuong trinh chinh===
int main()
{
	ifstream fin("daykhoa.txt");

	if (!fin)
	{
		cout << "Khong doc duoc tep! ";
		return -1;
	}
	// khia bao bien
	int *a, n, m;

	// doc tep
	fin >> n;
	a = new int[n];
	cout << "Day khoa tu tep: ";

	for (m = 0; m < n; m++)
	{
		fin >> a[m];
		cout << "\t" << a[m];
	}
	bubbleSort(a, n);

	cout << "\nDay khoa sau khi sap xep la-: ";
	for (m = 0; m < n; m++)
	{

		cout << "\t" << a[m];
	}
	// Huy mang dong
	delete[] a;

	// Dong tep
	fin.close();

	cout << endl;
	return 0;
}
//===Dinh nghia ham===

void bubbleSort(int *a, int n)
{
	/* // sap xep tang dan
	int i, j;
	for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
			if (a[j] < a[j - 1])
			{
				int tg = a[j];
				a[j] = a[j - 1];
				a[j - 1] = tg;
			}
 */
	//sap xep giam dan
	int i, j;
	for (int i = 0; i<n - 1; i++)
		for (int j = n - 1; j>i; j--)
			if (a[j] > a[j - 1])
				{
					int tg= a[j];
					a[j] = a[j-1];
					a[j-1] = tg ;
				}

}

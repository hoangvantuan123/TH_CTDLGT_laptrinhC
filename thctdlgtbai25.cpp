/*
Bài 25(thctdlgtbai25.cpp). Cho dãy khóa n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoa.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật sắp xếp chèn
để sắp xếp dãy khóa trong mảng động tăng dần. Đưa dãy khóa ban đầu và dãy khóa đã sắp xếp
ra màn hình.
*/

#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

//Khai bao ham cai dat giai thuat chen
void insertSort(int *a, int n);
//=== chuong trinh chinh ===
int main()
{
    ifstream fin("daykhoa.txt");
    
    if(!fin){
    	cout<<"Khong doc duoc tep! ";
    	return -1 ;  
		  
	} 
	// khai bao bien  
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
    insertSort(a, n);

    cout << "\nDay khoa sau khi sap xep la: ";
    for (m = 0; m < n; m++)
    {
        cout << "\t" << a[m];
    }
	// Dong tep 
	fin.close();
	 
    cout << endl;
    return 0;
}
//=== Dinh nghia ham ===
void insertSort(int *a, int n)
{
	
	// sap xep tang dan  
    int tg, j;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        tg = a[i];
        while (j > -1  && tg < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        //Dua tg vao dung vi tri , chen vao sau j
        a[j + 1] = tg;
    }
     
    /*
    // sap xep giam  dan  
    int tg, j;
    for (int i = 1; i < n; i++)
    {
        j = i - 1;
        tg = a[i];
        while (j > -1  && tg > a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        //Dua tg vao dung vi tri , chen vao sau j
        a[j + 1] = tg;
    }
    */
}

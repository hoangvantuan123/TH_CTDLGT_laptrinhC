/*
Bài 27(thctdlgtbai27.cpp). Cho dãy khóa n ph?n t? là các s? nguyên luu tr? trong
t?p van b?n 'daykhoa.txt'. Ð?c dãy khóa t? t?p vào m?ng d?ng. Cài d?t gi?i thu?t s?p x?p nhanh
d? s?p x?p dãy khóa trong m?ng d?ng tang d?n. Ðua dãy khóa ban d?u và dãy khóa dã s?p x?p
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
     if(!fin){
    	cout<<"Khong doc duoc tep! ";
    	return -1 ;  
		  
	} 
	// Khai bao bien 
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
    quickSort(a, 0,n-1);

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
//===Dinh nghia ham===
void quickSort(int *a, int L, int R)
{
	
	// Sap xep tang dan  
    if (L >= R) {// Khi d? m?ng c? 0 ph?n t?, d?ng
        return;
    }
    int i = L ;
	int j = R ;
	int k = ( L+R)/2 ;
	int x = a[k];
	
	do {
		// Duyet tu ben trai sang va duyet tu ben phai  
		while(a[i] <x) // o day la sap xep tang dan  
		{ 
			i++;
		}
		while( a[j] > x) // o day la sap xep tang dan  
		{
			j--;
		}
		if(i < j){
			int tg = a[i];
			a[i] = a[j];
			a[j] = tg ;
		}
	} 
	while(i<j);
	
	quickSort(a,L,j-1);
	quickSort(a,j+1,R);
	
    
    /*
    // Sap xep giam dan  
    if (L >= R) {// Khi d? m?ng c? 0 ph?n t?, d?ng
        return;
    }
    int i = L ;
	int j = R ;
	int k = ( L+R)/2 ;
	int x = a[k];
	
	do {
		// Duyet tu ben trai sang va duyet tu ben phai  
		while(a[i] >x) // o day la sap xep giam  dan  
		{ 
			i++;
		}
		while( a[j] < x) // o day la sap xep giam  dan  
		{
			j--;
		}
		if(i < j){
			int tg = a[i];
			a[i] = a[j];
			a[j] = tg ;
		}
	} 
	while(i<j);
	
	quickSort(a,L,j-1);
	quickSort(a,j+1,R);
	*/
    
}


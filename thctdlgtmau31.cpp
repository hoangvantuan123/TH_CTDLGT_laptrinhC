
//De:
/*Bài 31(thctdlgtbai31.cpp). Cho dãy khóa tăng dần có n phần tử là các số nguyên lưu trữ trong
tệp văn bản 'daykhoatangdan.txt'. Đọc dãy khóa từ tệp vào mảng động. Cài đặt giải thuật
tìm kiếm nhị phân dạng không đệ quy để tìm khóa có giá trị bằng x, nếu tìm thấy thì
trả về vị trí của khóa, nếu không tìm thấy thì trả về 0.
*/

#include<iostream>
#include<stdio.h>
#include<fstream>

using namespace std;

//khai bao ham cai dat giai thuat sap tim kiem nhi phan
int binarySearch(int * k,int n,int x);

//===Chuong trinh chinh===
int main()
{
    //khai bao tep doc vao
    fstream fin("daykhoatangdan.txt");

    //Khai bao bien
    int n;

    //Doc so phan tu cua day khoa tu tep
    fin>>n;

    //Tao mang dong a co n o nho de chua day khoa
    int *a = new int[n];

    //Doc day khoa tu tep vao mang dong va dua ra man hinh
    cout<<"Dãy khóa ban đầu đọc được từ tệp là:\n";
    for(int i=0;i<n;i++)
    {
	fin>>a[i];
	cout<<a[i]<<"  ";
    }

    //Tim kiem
    int x,kq;

    cout<<"\n\nNhập vào khóa x cần tìm: ";
    cin>>x;

    kq = binarySearch(a,n,x);

    if(kq) printf("\nKhóa %d có trong dãy khóa tại vị trí %d.",x,kq);
    else printf("\nKhóa %d không có trong dãy khóa.",x);

    //Huy mang dong
    delete [] a;

    cout<<endl;
    return 0;

}
//===Dinh nghia ham===
int binarySearch(int *k,int n,int x)
{
    //khoi tao
    int L=0,R=n-1;

    //Tim kiem
    while(L<=R)
    {
	//tinh chi so giua
	int m=(L+R)/2;

	//So sanh
    	if(x<k[m]) R=m-1;
	else if(x>k[m]) L=m+1;
	else return m+1;
    }

    //Khong tim thay
    return 0;
}

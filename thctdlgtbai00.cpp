
//De :
/*
Bài 00(thctdlgtbai00.cpp): Tính diện tích và chu vi hình tam giác
có 3 cạnh a,b,c đọc vào từ tệp văn bản 'tamgiac.txt'. Đưa kết quả ra màn hình,
đồng thời ghi ra tệp văn bản 'kq-thctdlgtbai00.txt'.
*/

#include<iostream>
#include<stdio.h>
#include<fstream>
#include<math.h>

using namespace std;

//===Chuong trinh chinh===
int main()
{
    ifstream fin("tamgiac.txt");
    ofstream fout("kq-thctdlgtbai00.txt");

    float a, b, c, s, p;
    fin>>a>>b>>c;

    if( a < b+c && b < a+c && c < a+b ){
	cout<<"Tam giac co 3 canh lan luot la: "<<a<<", "<<b<<", "<<c<<endl;

	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));

	fout<<p*2<<endl;
	fout<<s<<endl;

	cout<<"Chu vi tam giac: " <<p*2<<endl;
        cout<<"Dien tich tam giac: "<<s<<endl;
    }else{
	cout<<" Tam giac khong hop le!!"<<endl;
    }
    return 0;
}
//===Dinh nghia ham===

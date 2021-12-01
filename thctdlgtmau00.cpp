
//De:00
/*
Bài 00(thctdlgtbai00.cpp): Tính diện tích và chu vi hình tam giác
có 3 cạnh a,b,c đọc vào từ tệp văn bản 'tamgiac.txt'. Đưa kết quả ra màn hình,
đồng thời ghi ra tệp văn bản 'kq-thctdlgtbai00.txt'.
*/
#include<iostream>
#include<fstream>
#include<stdio.h>
#include<math.h>

using namespace std;

//====Chuong trinh chinh=====
int main()
{
    //Khai bao tep
    ifstream fin("tamgiac.txt");
    ofstream fout("kq-thctdlgtbai00.txt");

    //Khai bao bien
    float a,b,c;

    //Doc vao 3 canh tu tep
    fin>>a>>b>>c;

    if(a+b>c && a+c>b && b+c>a)
    {
	float cv = a+b+c;
	float p = cv/2;
	float dt = sqrt(p*(p-a)*(p-b)*(p-c));

	printf("Tam giac co 3 canh la:\na = %0.1f; b = %0.1f; c = %0.1f",a,b,c);
	printf("\nDien tich tam giac la: %0.1f ",dt);
	printf("\nChu vi tam giac la: %0.1f ",cv);

	//Ghi ket qua ra tep
	fout<<"Tam giac co 3 canh la:\na = "<<a<<";b = "<<b<<"; c = "<<c;
	fout<<"\nDien tich tam giac la: "<<dt;
	fout<<"\nChu vi tam giac la: "<<cv;
    }
    else
    {
	printf("3 so tren tep khong phai la 3 canh cua tam giac: %0.1f; %0.1f; %0.1f",a,b,c);

	//Ghi ket qua ra tep
	fout<<"3 so tren tep khong phai la 3 canh cua tam giac: "<<a<<"; "<<b<<"; "<<c;
    }

    //Thong bao da ghi ra tep
    cout<<"\n\nDa ghi ket qua ra tep kq-thctdlgtbai00.txt";

    cout<<endl;
    return 0;
}
//====Dinh nghia ham===



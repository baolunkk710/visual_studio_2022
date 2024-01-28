#include<iostream> // thu vien ho tro nhap xuat chuan
using namespace std;


// giai pt bac nhat co dang: ax + b = 0
// phan tich bai toan
/*
b1: khai bao 2 bien a va b de giai pt
b2: 
TH1: a = 0
		+ b = 0
		    ==> pt vo so nghiem
        + b khac(!=) 0
			==> pt vo nghiem
TH2:
	a != 0
		==> pt luon co nghiem: -b/a
*/

int main() // day la ham chinh - dong vai tro nhu la bo nao con nguoi 
{	
	float a; // khai bao bien so thuc a
	float b; // khai bao bien so thuc b

	cout << "\nNhap he so a: ";
	cin >> a; //nhap gia tri cho bien a
	cout << "\nNhap he so b: ";
	cin >> b; //nhap gia tri cho bien b

	/*thuat toan - y tuong giai pt*/
	//th1: kiem tra xem a co bang 0 hay khong
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "\npt vo so nghiemm";

		}
		else // <=> if(b!=0) 
		{
			cout << "\npt vo nghiemm";
		}
	}
		//th2: kiem tra xem a co khac 0 hay khong?
	else // <=>  if(a != 0)
	{
		cout << "\npt co nghiem laa: " << -b / a;

	}
	
	system("pause"); // dung man hinh de xem
	//return 0;


}






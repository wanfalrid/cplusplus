#include <iostream>
using namespace std;

int main()
{
	int pln,pdam,pil,pemakaian,metawal,metakhir,biaya,sisa;
	int listrik,pakai,subsidi,biaya1,pem,totalbiaya,list;
	
	cout << "=======================" <<endl;
	cout << "SELAMAT DATANG DI PLN " <<endl;
	cout << "=======================" <<endl;
	cout << "MENU:" <<endl;
	cout << "1. Hitung Biaya PDAM" <<endl;
	cout << "2. Hitung Biaya Listrik" <<endl;
	cout << "Masukan Pilihan Anda :" ; cin>>pil;
	
	switch (pil)
	{
		case 1: 
		cout <<"Meter Kubik Lama :" ; cin>>metawal;
		cout <<"Meter Kubik Baru :" ; cin>>metakhir;
		
		pemakaian=metakhir-metawal;
		
		if (pemakaian<=15)
		{
			biaya=700*15;
			cout <<"TOTAL BIAYA YANG HARUS DIBAYAR ADALAH :" <<biaya<<endl;
		}
		else
		{
			sisa=pemakaian-15;
			biaya=(15*700)+(sisa*400);
			cout << "TOTAL BIAYA YANG HARUS DIBAYAR ADALAH :" <<biaya<<endl;break;
		}
		
		case 2:
		cout << "MENU PEMBAYARAN LISTRIK" <<endl;
		cout << "1. Daya 450" <<endl;
		cout << "2. Daya 900" <<endl;
		cout << "3. Daya 1300" <<endl;
		cout << "Input Pemakaian :" ; cin>>list;
		
		switch (list)
		{
		
		case 1 :
		cout <<"Masukan Pemakaian :" ; cin>>pakai;
		biaya1=pakai*500;
		subsidi=0.2*biaya1;
		totalbiaya=biaya1-subsidi;
		cout << "TOTAL BIAYA YANG HARUS DIBAYAR ADALAH :" <<totalbiaya<<endl;break;
		
		case 2 :
		cout <<"Masukan Pemakaian :" ; cin>>pakai;
		biaya1=pakai*600;
		subsidi=0.1*biaya1;
		pem=0.02*biaya1;
		totalbiaya=biaya1-subsidi+pem;
		cout << "TOTAL BIAYA YANG HARUS DIBAYAR ADALAH :" <<totalbiaya<<endl;break;
		
		case 3 :
		cout <<"Masukan Pemakaian :" ; cin>>pakai;
		biaya1=pakai*700;
		subsidi=0.1*biaya1;
		pem=0.0*biaya1;
		totalbiaya=biaya1-subsidi+pem;
		cout << "TOTAL BIAYA YANG HARUS DIBAYAR ADALAH :" <<totalbiaya<<endl;break;
		}
	
	}
	
	return 0;
}
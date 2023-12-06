#include <iostream>
using namespace std;

int main()
{
	int tab, ambil,pil, lembar;
	double saldo=500000;

	cout << "=======================" <<endl;
	cout << "M.NAJWAN NAUFAL ALFARID" <<endl;
	cout << "=======================" <<endl;	
	cout << "=======================" <<endl;
	cout << "SELAMAT DATANG DI BANK " <<endl;
	cout << "=======================" <<endl;
	cout << "MENU:" <<endl;
	cout << "1. Menabung" <<endl;
	cout << "2. Mengambil" <<endl;
	cout << "Masukan Pilihan Anda :" ; cin>>pil;
	
	switch (pil)
	{
		case 1: cout <<"Input Jumlah Tabungan :" ; cin>>tab;
		saldo=saldo+tab;
		cout <<"Jumlah Saldo Anda Adalah :" <<saldo<<endl; break;
	
		case 2:
		cout <<"Input Jumlah Ambil :" ; cin>>ambil; 
		
		if (ambil>saldo)
		{
		 cout << "SALDO ANDA KURANG" <<endl;  	
		}
		else if (ambil<saldo)
		{
			
			if (ambil%50000==0)
			{
			saldo=saldo-ambil;
			lembar=ambil/50000;
			cout << "SISA UANG ANDA :" <<saldo<<endl;
			cout << "JUMLAH LEMBAR :" <<lembar<<endl;
			}
			else
			{
			cout << "BUKAN KELIPATAN 50000" <<endl;break;
			}
		}
		
	
	}
	
	return 0;
}

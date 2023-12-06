#include <iostream>
using namespace std;
 
int main() 
{
	int hasil,n,nilai,rata,i;
	cout <<"Input data :" ; cin >> n;
	for (i=1;i<=n;i++)
	{
		cout << "Input Nilai :" ; cin>>nilai;
		hasil=hasil+nilai;
 	}
 	rata=hasil/n;
 	cout <<"Nilai rata-rata :" <<rata<<endl;
 	
 	return 0;
}
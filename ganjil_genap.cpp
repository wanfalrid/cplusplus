#include <iostream>
using namespace std;

int main ()
{
    int ganjil,genap,hslgenap=0,hslganjil=0,data;
    cout << "Input Data : ";
    cin >> data;

    for (ganjil=1;ganjil<= data;ganjil++)
    {
        if (ganjil%2 == 1)
        {
            hslganjil = hslganjil + ganjil;
        }
    }

    for (genap = 1; genap <= data; genap++)
    {
        if (genap%2 == 0)
        {      
        hslgenap = hslgenap + genap;
        }
    }
    cout <<"Hasil Penjumlahan ganjil :" << hslganjil << endl;
    cout << "Hasil Penjumlahan genap :" << hslgenap << endl;
return 0;
}
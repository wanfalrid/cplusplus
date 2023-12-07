#include <iostream>
using namespace std;

void garis()
{
    cout << "====================\n";
}
int a;
int b;
int hasil;
int tambah (int a, int b)
{
    return (a + b);
}
int kurang (int a, int b)
{
    return (a - b);
}
int kali (int a, int b)
{
    return (a * b);
}
int bagi (int a, int b)
{
    if (b == 0 && a == 0)
    {
        cout << "Hasil tidak tedefinisi!";
    }
    else
    {
    return a / b;
    }

}

int main ()
{
    int pil;
    do{
    garis();
    cout << "=====KALKULATOR=====\n";
    garis ();
    cout << "1. PENJUMLAHAN (+)\n";
    cout << "2. PENGULANGAN (-)\n";
    cout << "3. PERKALIAN (*)\n";
    cout << "4. PEMBAGIAN (/)\n";
    garis ();
    cout << "Pilih : "; cin >> pil;
    cout << "Input A : "; cin >> a;
    cout << "Input B : "; cin >> b;
    switch (pil)
    {
        case 1 :

        hasil = tambah(a,b);
        cout << "Hasilnya adalah : " << hasil << '\n' ;
        break;

        case 2 :
        hasil = kurang(a,b);
        cout << "Hasilnya adalah : " << hasil << '\n';
        break;

        case 3 :
        hasil = kali(a,b);
        cout << "Hasilnya adalah : " << hasil << '\n';
        break;

        case 4 :
        hasil = bagi(a,b);
        if (hasil < 0)
        {
        cout << "Hasil tidak terdefinisi!";
        }
        else
        {
        cout << "Hasilnya adalah : \n" << hasil << '\n';
        }
        break;
    }
    } while (pil != 3);
    return 0;
}
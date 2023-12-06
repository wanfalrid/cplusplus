#include <iostream>
using namespace std;

int main ()
{
    int baris;
    int kolom;
    char simbol;

    cout << "Mau Berapa Baris ? ";
    cin >> baris;

    cout << "Mau Berapa Kolom? ";
    cin >> kolom;

    cout << "Masukan Sebuah Simbol : ";
    cin >> simbol;

    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            cout << simbol;
        }
        cout << '\n';
    }
return 0;
}
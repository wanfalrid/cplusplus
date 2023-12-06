#include <iostream>
using namespace std;

void SelamatUlangTahun (string nama, int umur);

int main ()
{

    string nama;
    cout << "sebut nama kamu : ";
    cin >> nama;

    int umur;
    cout << "Berapa Usiamu Sekarang : ";
    cin >> umur;

    SelamatUlangTahun (nama, umur);

    return 0;
}

void SelamatUlangTahun (string nama, int umur)
{
    cout << "Selamat Ulang Tahun " << nama << '\n';
    cout << "Selamat Ulang Tahun " << nama << '\n';
    cout << "Selamat Ulang Tahun King " << nama << '\n';
    cout << "Selamat Ulang Tahun " << nama << '\n';
    cout << "Umur kamu sekarang " << umur << '\n';
}


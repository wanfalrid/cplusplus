#include <iostream>
using namespace std;

void tunjukansaldo(double saldo);
double deposit ();
double tariksaldo(double saldo);

int main ()
{
    double saldo = 0;
    int pilihan = 0;
    do {
    cout << "**********************\n";
    cout << "Masukan Pilihan kamu :\n";
    cout << "**********************\n";
    cout << "1. Tunjukan Saldo\n";
    cout << "2. Deposit Uang\n";
    cout << "3. Tarik Saldo\n";
    cout << "4. Keluar Program\n";
    cin >> pilihan;
    switch (pilihan) 
    {
        case 1: tunjukansaldo(saldo);
            break;
        case 2: saldo += deposit(); // saldo = saldo + deposit();
            tunjukansaldo(saldo);
            break;
        case 3: saldo -= tariksaldo(saldo); // saldo = saldo - tariksaldo(saldo
            tunjukansaldo(saldo);
            break;
        case 4: cout << "Terimakasih sudah berkunjung!\n";
            break;
        default: cout << "Pilihan tidak tersedia! \n";
    }
    }while(pilihan != 4);
    return 0;
}
void tunjukansaldo(double saldo)
{
    cout << "Saldo kamu adalah :Rp." << saldo << '\n';
}
double deposit ()
{
    double jumlahdeposit;
    cout << "Silahkan masukan nominal uang yang akan di deposit : ";
    cin >> jumlahdeposit;
    if (jumlahdeposit > 0)
    {
    return jumlahdeposit;
    }
    else
    {
        cout << "Nominal tidak valid!\n";
        return 0;
    }
}
double tariksaldo(double saldo)
{
    double jumlahtarik;
    cout << "Silahkan masukan nominal uang yang ingin ditarik : ";
    cin >> jumlahtarik;
    if (jumlahtarik <= saldo && jumlahtarik >= 0 )
    {
        return jumlahtarik;
        }
        else
        {
        cout << "Nominal tidak valid!\n";
        return 0;
        }
    return 0;
}
#include <iostream>
using namespace std;

int main ()
{
    int saldo = 30000;
    int diskon, diskon2;
    int pil,pinjam,total1, total2;
    int biaya_pinjam = 4000;
    char member;
    string ulang;
    string cobalagi;
    string pinbenar = "123";
    string pinuser;
do {
    cout << "Masukan nomor PIN : ";
    cin >> pinuser;


    if (pinuser == pinbenar)
    {
        do {
        cout << "*****SELAMAT DATANG *****\n";
        cout << "MENU\n";
        cout << "1. Hitung Biaya Komik.\n";
        cout << "2. Hitung Biaya Belanja.\n";
        cout << "3. Cek Saldo.\n";
        cout << "Masukan Pilihan Kamu : ";
        cin >> pil;
    
        switch (pil)
        {
            case 1 :
            cout << "MENGHITUNG BIAYA PINJAM KOMIK\n";
            cout << "Masukan lama peminjaman komik :";
            cin >> pinjam;
            cout << "Apakah kamu member ? (Y/T) : ";
            cin >> member;

            if (member == 'Y' || member == 'y')

            {
                if (pinjam > 2)
                {
                    total2 = biaya_pinjam + (pinjam - 2) * 1000;
                    if (total2 > 50000)
                    {
                        diskon2 = total2 * 0.1;
                    }
                    else if (total2 <= 50000)
                    {
                        diskon2 = total2 * 0.05;                        
                    }
                }
                else
                {
                    total2 = biaya_pinjam * 2;
                }
            }
            else
            {
            total2 = (biaya_pinjam * 2) + (pinjam - 2) * 1000;
            }
             
            total1 = total2 - diskon2;

            if (total1 > saldo)
            {
            cout << "Saldo Tidak Tercukupi";
            cout << "Apakah anda ingin mengulangi? (Ya/T)";
            cin >> ulang;
            }
            else
            {
            saldo = saldo - total1;
            cout << "Total Pembayaran adalah : " << total1 << '\n';
            cout << "Sisa Saldo adalah : " << saldo << '\n';
            cout << "Apakah anda ingin mengulangi? (Ya/T)";
            cin >> ulang;
            }

        break;
            case 2 :
            {
        int jumlahBarang;
        double hargaPerBarang;
        double totalBelanja,diskon,totalpembayaran;
        
        cout << "Masukkan jumlah barang: ";
        cin >> jumlahBarang;

        cout << "Masukkan harga per barang: ";
        cin >> hargaPerBarang;

        totalBelanja = jumlahBarang * hargaPerBarang;

        if (totalBelanja <= 50000) 
        {
        diskon = 0.0;
        } 
        else if (totalBelanja < 100000) 
        {
        diskon = 0.05 * totalBelanja;
        }
        else {
        diskon = 0.1 * totalBelanja;
        }

        totalpembayaran = totalBelanja - diskon;

        
        if (totalpembayaran > saldo)
        {
            cout << "saldo tidak tercukupi\n";
            cout << "Apakah anda ingin mengulangi? (Ya/T)";
            cin >> ulang;
        }
        else
        {
        saldo = saldo - totalpembayaran;
        cout << "Total Pembayarannya adalah : " << totalpembayaran << '\n';
        cout << "Sisa Saldo adalah : "  << saldo << '\n' ;
        cout << "Apakah anda ingin mengulangi? (Ya/T)";
        cin >> ulang;
        }
            break; 
            }
            case 3 :
            {
            cout << "Saldo saat ini: " << saldo << '\n'; 
          break; 
            default:
            cout << "Pilihan tidak tersedia" << '\n';
            }
        }
            }while(ulang == "Ya" || ulang == "ya");
        }
        else
        {
        cout << "PIN SALAH! Coba lagi. \n";
        } 
}while (pinuser != pinbenar);


return 0;
}
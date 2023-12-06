#include <iostream>
using namespace std;

int main ()
{
char jwb;
        int pil;
        int biaya_parkir = 2000;
        int jam_masuk, jam_keluar, lama_parkir;
    do 
    {


        cout << "***** MENU *****\n";
        cout << "1. Bayar Parkir.\n";
        cout << "2. Hitung Gaji.\n";
        cout << "Input Pilihan Anda : ";
        cin >> pil;

        switch (pil)
        {
            case 1 : 

        cout << "***** BAYAR PARKIR *****\n";
        cout << "Masukan Jam Masuk : ";
        cin >> jam_masuk;

        cout <<"Masukan Jam Keluar : ";
        cin >> jam_keluar;

        lama_parkir = jam_keluar - jam_masuk;
        
        if (lama_parkir > 1)
        {
            biaya_parkir = (lama_parkir - 1) * 1000 + biaya_parkir;
            cout << "Biayanya adalah : " << biaya_parkir << endl; break;
        }
        else
        {
            cout << "Biayanya adalah :" << biaya_parkir << endl; break;
        }

            case 2 :

            string nama;
            char golongan;
            int nik, pinjaman, gaji_total, gaji_pokok, tunjangan_keluarga, tunjangan_transportasi;
            
            cout << "***** HITUNG GAJI *****\n";
            cout << "input NIK : ";
            cin >> nik;

            cout << "Input Nama Karyawan : ";
            cin.ignore(); // Membersihkan newline (enter) yang tersisa di buffer
            getline(cin, nama);

            cout << "Masukan Golongan Karyawan : ";
            cin >> golongan;

            cout << "Masukan jumlah pinjaman : ";
            cin >> pinjaman;

            if (golongan == 'A')
            {
                cout << "NIK : " << nik <<endl;
                cout << "Hallo, " << nama <<endl;
                gaji_pokok = 350000;
                tunjangan_keluarga = gaji_pokok * 0.07;
                tunjangan_transportasi = tunjangan_keluarga * 0.05;
                gaji_total = gaji_pokok + tunjangan_keluarga + tunjangan_transportasi - pinjaman;

                cout <<"Gaji Bersihnya adalah : " << gaji_total << '\n';
            }
            else if (golongan == 'B')
            {
                cout << "NIK : " << nik <<endl;
                cout << "Hallo, " << nama <<endl;
                gaji_pokok = 400000;
                tunjangan_keluarga = gaji_pokok * 0.09;
                tunjangan_transportasi = tunjangan_keluarga * 0.06;
                gaji_total = gaji_pokok + tunjangan_keluarga + tunjangan_transportasi - pinjaman;
                cout <<"Gaji Bersihnya adalah : " << gaji_total << '\n';
            }
            else if (golongan == 'C')
            {
                cout << "NIK : " << nik <<endl;
                cout << "Hallo, " << nama <<endl;
                gaji_pokok = 500000;
                tunjangan_keluarga = gaji_pokok * 0.12;
                tunjangan_transportasi = tunjangan_keluarga * 0.1;
                gaji_total = gaji_pokok + tunjangan_keluarga + tunjangan_transportasi - pinjaman;
                
                cout <<"Gaji Bersihnya adalah : " << gaji_total << '\n';
            }
            else
            {
                cout << "Golongan Tidak Tersedia.";
            }
        }
cout << "Apakah anda ingin mengulanginnya? \n";
cin >> jwb;
} while (jwb == 'y' || jwb == 'Y');
return 0;
}

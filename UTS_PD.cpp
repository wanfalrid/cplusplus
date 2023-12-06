#include <iostream>
using namespace std;

int main() {
  int pin, pilihan;
  double saldo = 300000;
  
  cout << "Masukkan PIN: ";
  cin >> pin;
  
  if(pin == 123) {
    do {
      cout << "\nMENU" << endl;
      cout << "1. Hitung biaya telfon " << endl;
      cout << "2. Hitung biaya belanja" << endl; 
      cout << "3. Cek saldo" << endl;
      cout << "Pilihan: ";
      cin >> pilihan;
      
      switch(pilihan) {
        case 1:
        {
          int jmlpjm, status;
          double biaya, diskon, total;
          
          cout << "Jumlah hari peminjaman: ";
          cin >> jmlpjm;
          cout << "Status (1 untuk Member, 0 untuk Bukan Member): ";
          cin >> status;
          
          biaya = 2000 * 2;
          if(jmlpjm > 2)
            biaya += 1000 * (jmlpjm - 2);
            
          if(status == 1) {
            if(biaya > 50000) {
              diskon = 0.1 * biaya; 
            } else {
              diskon = 0.05 * biaya;
            }
          } else {
            diskon = 0;
          }
          
          total = biaya - diskon;
          saldo -= total;
          
          cout << "Biaya: " << biaya << endl;
          cout << "Diskon: " << diskon << endl; 
          cout << "Total Bayar: " << total << endl;
          
          break;
        }
        case 2:
        {
         int jml_barang;
         double harga, total_belanja, diskon;
         
         cout << "Jumlah barang yang dibeli: "; 
         cin >> jml_barang;
         
         double harga_barang[jml_barang];
         for(int i = 0; i < jml_barang; i++) {
           cout << "Harga barang ke-" << i+1 << ": ";
           cin >> harga_barang[i];  
         }
         
         total_belanja = 0;
         for(int i = 0; i < jml_barang; i++) {
           total_belanja += harga_barang[i]; 
         }
         
         if(total_belanja <= 50000) {
           diskon = 0;
         } else if (total_belanja <= 100000) {
           diskon = 0.05 * total_belanja;  
         } else {
           diskon = 0.1 * total_belanja;
         }
         
         total_belanja -= diskon; 
         
         saldo -= total_belanja;
         
         cout << "Total belanja: " << total_belanja << endl;  
         cout << "Diskon: " << diskon << endl;
         break;   
        }
        case 3:
          cout << "Saldo saat ini: " << saldo << endl; 
          break; 
        default:
          cout << "Pilihan tidak tersedia" << endl;
      }
    } while(pilihan != 3);
    
  } else {
    cout << "PIN salah!"; 
  }

  return 0;
}
#include <iostream>
using namespace std;

// Fungsi untuk menghitung jumlah mainan
int hitungJumlahMainan() {
    int jumlahMainan = 5;
    return jumlahMainan;
}

int main() {
    // Memanggil fungsi hitungJumlahMainan dan menyimpan hasilnya
    int hasilHitungan = hitungJumlahMainan();

    // Menampilkan hasil ke layar
    cout << "Jumlah mainan yang kita punya: " << hasilHitungan << endl;

    return 0;
}

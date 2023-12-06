#include <iostream>
using namespace std;

int main ()
{
    string nama;
                            //perlu diingat jika 0 berarti 1
    cout << "Siapa nama kamu? ";
    getline(cin, nama);

   //  nama.append(" Ganteng."); //untuk menambahkan kata

    //saat kita memasukan nama semisal Naufal, maka hanya akan mengambil huruf pertama yaitu N (0), jika (1) maka akan mengambil kata kedua yaitu A
    //cout << nama.at(0);

    // ini akan menambahkan simbol "@" diawal kata
    // semisal mengetikan "Naufal", maka akan menjadi "@Naufal"
    // jika kita mengganti angka 0 nya menjadi 1, maka akan menjadi "N@aufal"
    // nama.insert(0, "@");

    //ini berfungsi untuk mencari huruf yg dicari berada di urutan berapa
    //semisal kita menccari kata u di kata Naufal
    //maka akan muncul huruf 2, karna N=0 a=1 dan u=2
    //cout <<nama.find('u');

    //if(nama.length() > 12) // #1 
    if(nama.empty()) // #2
    {
        //cout << "Nama kamu tidak boleh lebih dari 12 karekter."; // #1
        cout << "Kamu tidak mengisikan nama kamu"; // #2
    }
    else 
    {
        cout << "Selamat datang, " << nama;
    }
    return 0;
}

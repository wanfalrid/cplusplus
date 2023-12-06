#include <iostream>

using namespace std;

int main ()
{
    string lapar_str;

    cout << "Lapar gak? ";
    cin >> lapar_str;

    //int number = 8;
    //number % 2 == 0 ? cout << "GENAP" : cout << "GANJIL"; // jika menentukan genap (0) maka kata GENAP disimpan diawal
    //number %2 == 1? cout << "GANJIL" : cout << "GENAP"; // jika menentukan ganjil (1) maka kata GANJIL disimpan di awal

    bool lapar (lapar_str == "iya");
    
    //cout << (lapar ? "Ayo Makan" : "Udah Kenyang");
    
    string respon = (lapar) ? "Ayo Makan" : "Mungkin lain kali.";
    cout << respon << endl;
    
    return 0;
}
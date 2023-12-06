#include <iostream>
using namespace std;

int main() {
    int ganjil, genap, hsl, data;
    int totalganjil = 0;
    int totalgenap = 0;

    cout << "Input Data : ";
    cin >> data;

    for (ganjil = 1; ganjil <= data; ganjil++) 
    {
        if (ganjil % 2 == 1) 
        {
            totalganjil = totalganjil +ganjil;
        }
    }

    for (genap = 1; genap <= data; genap++) 
    {
        if (genap % 2 == 0) 
        {
            totalgenap = totalgenap + genap;
        }
    }

    cout << "Hasil Penjumlahan ganjil : " << totalganjil << endl;
    cout << "Hasil Penjumlahan genap : " << totalgenap << endl;

    return 0;
}

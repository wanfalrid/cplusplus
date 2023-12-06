#include <iostream>
using namespace std;

int main ()
{
    // #2 do whlile loop : lakukan beberapa blok kode terlebih dahulu
    //                  lalu ulangi lagi jika kondisinya true

    int nomor; // <<  #1 jika seperti ini maka sudah secara default nilai nya 0
    
        /* cout << "Masukan nomor positif : ";
        cin >> nomor; */
    
    /* while (nomor < 0) // #1 maka secara langsung kondisinya adalah false
    {
        cout << "Masukan nomor positif : ";
        cin >> nomor;
    } */

    do { //#2
        cout << "Masukan nilai positif : ";
        cin >> nomor;
    } while (nomor < 0);

    cout << "Nomornya adalah :" << nomor;

    return 0;
}
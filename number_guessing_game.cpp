#include <iostream>
using namespace std;

int main ()
{
    int num;
    int tebak;
    int percobaan;

    srand (time(NULL));
    num = (rand() %100) + 1;

    cout << "***** GAME TEBAK ANGKA*****\n";

    do {
        cout << "Tebak sebuah angka dari (1-100): ";
        cin >> tebak;
        percobaan++;

        if (tebak > num){
            cout << "Terlalu Tinggi!\n";
        }
        else if (tebak < num){
            cout << "Terlalu rendah!\n";
        }
        else {
            cout << "BETUL! # percobaan ke: " << percobaan << '\n';
        }
    }while(tebak != num);

return 0;
}
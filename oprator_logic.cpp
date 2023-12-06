#include <iostream>

using namespace std;

int main ()
{
    // && = untuk cek jika kedua kondisi adalah 'true'
    // || = untuk cek jika salah satu dari kondisi adalah 'true'
    // ! = jika suatu kondisi benar maka akan jadi salah, jika suatu kondisi salah maka akan jadi benar

    int temp;
    bool cerah = false; // contoh untuk !

    cout << "Masukan Tempratur : ";
    cin >> temp;

    //if (temp > 0 && temp < 30) // untuk &&
    if (temp <= 0 || temp >= 30) // tempraturnya akan buruk jika kurang dari 0 dan lebih dari 30
    {
        //cout << "Tempraturnya baik"; // << untuk &&
        cout << "Tempraturnya buruk! \n";
    }
    else 
    {
        //cout << "Tempraturnya buruk!"; // << untuk &&
        cout << "Tempraturnya baik \n";
    }

    if (!cerah)
    {
        cout << "cuaca diluar berawan!";
    }

    else
    {
        cout << "Cuaca diluar cerah!";
    }
    return 0;
}
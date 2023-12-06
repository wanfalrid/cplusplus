#include <iostream>
using namespace std;

int main ()
{
    double temp;
    int unit;

    cout <<"**********KONVERSI SUHU**********\n";
    cout <<"C = Celcius 1\n";
    cout <<"F = Fahrenheit 2\n";
    cout <<"K = Kelvin 3\n";
    cout <<"R = Rankine 4\n";

    cout <<"Masukan suhu yang akan di konversi :";
    cin >> unit;

    switch (unit)
    {
    case 1:
    cout << "Masukan suhu celcius : ";
    cin >> temp;

    temp = (1.8 * temp) + 32.0;
    cout << "Suhunya adalah : " << temp << " F\n";break;    
    
    case 2 :
    cout << "Masukian suhu Fahrenheit : ";
    cin >> temp;

    temp = (temp - 32) * 1.8;
    cout << "Suhunya adalah : " << temp << " C\n";break;

    case 3 :
    cout << "Masukan suhu celcius : ";
    cin >> temp;

    temp = temp + 273.15;
    cout << "Suhunya adalah :" << temp << " K\n";break;

    case 4 :
    cout << "Masukan suhu Celcius : ";
    cin >> temp;

    temp = (temp + 273.15) * 1.8;
    cout << "Suhunya adalah : " << temp << " R\n";break; 
    
    default :
    cout << "Opsi tidak tersedia"; break;
    }
return 0;
}
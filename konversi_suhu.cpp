#include <iostream>
using namespace std;

int main ()
{
    double temp;
    char unit;

    cout <<"**********KONVERSI SUHU**********\n";
    cout <<"C = Celcius\n";
    cout <<"F = Fahrenheit\n";
    cout <<"K = Kelvin\n";
    cout <<"R = Rankine\n";

    cout <<"Masukan suhu yang akan di konversi :";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
    cout << "Masukan suhu celcius : ";
    cin >> temp;

    temp = (1.8 * temp) + 32.0;
    cout << "Suhu nya adalah" << temp << " F\n";
    }
    else if (unit == 'K' || unit == 'k')
    {
    cout << "Masukan suhunya : ";
    cin >> temp;

    temp = temp + 273.15;
    cout << "Suhunya adalah :" << temp << " K\n";
    }
    else if (unit == 'R' || unit == 'r')
    {
    cout << "Masukan suhunya :";
    cin >> temp;

    temp = (temp + 273.15) * 1.8;
    cout << "Suhunya adalah " << temp << " R\n";
    }
    else 
    {
    cout << "Input tidak tersedia"; << endl;
    }

return 0;
}

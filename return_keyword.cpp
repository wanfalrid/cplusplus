#include <iostream>
using namespace std;

double persegi (double panjang);
double kubik (double panjang);

int main ()
{
    double panjang = 6.0 ;
    double area = persegi(panjang);
    double volume = kubik(panjang);


    cout << "Area: " << area << "cm^\n";
    cout << "Volume: " << volume << "cm^\n";

    return 0;
}

double persegi (double panjang)
{
return panjang * panjang;
}
double kubik (double panjang)
{
return panjang * panjang * panjang;
}
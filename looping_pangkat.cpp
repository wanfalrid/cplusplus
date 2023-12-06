#include <iostream>
using namespace std;

int main ()
{
    int a,b,i;
    int hsl = 1;

    cout << "Input Angka : ";
    cin >> a;
    cout << "Input Pangkat : ";
    cin >> b;
    for (a = 1; a <= b; a++)
    {
        hsl = hsl * a;
    }
    cout << "Hasilnya adalah : " << hsl << endl;
return 0;
}
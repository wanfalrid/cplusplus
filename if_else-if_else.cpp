#include <iostream>
using namespace std;

int main ()
{

int umur;

cout << "Masukan umur anda : "; cin >> umur;

if (umur <= 20)
    {
    cout << "Anda masih remaja";
    }

else if (umur <= 40)
    {
    cout << "Anda sudah dewasa";
    }
else 
    {
    cout << "Anda sudah sepuh";
    }

return 0;
}
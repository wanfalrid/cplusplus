#include <iostream>
using namespace std;

int main ()
{
    int ayam;
    for (ayam = 10; ayam >= 1; ayam--)
    {
        if (ayam > 1)
        {
        cout << "Anak Ayam Turun " << ayam << ", mati satu tinggal " << ayam -1 << endl;
        }
        else
        {
        cout << "Anak Ayam Turun " << ayam << ", mati satu tinggal induknya "<< endl;
        }
    }
return 0;
}
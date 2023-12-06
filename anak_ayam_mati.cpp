#include <iostream>
using namespace std;

int main ()
{
    int ayam = 10;
    cout << "Anak ayam turun " << ayam << endl;
    for (ayam = 10; ayam >= 0; ayam--)
    {
        cout << "Anak Ayam Turun " << ayam << ", mati satu tinggal " << ayam -1 << endl;
        if (ayam == 2)
        {
        break;
        }
    }
    cout << "Anak Ayam Turun 1, mati satu tinggal induknya "<< endl;
return 0;
}
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ()
{
    srand (time(0));
    int randnum = rand () %5 + 1;

    switch (randnum)
    {
        case 1 : cout << "Kamu menang sebuah baju!\n";
        break;
        case 2 : cout << "Kamu menang sebuah uang!\n";
        break;
        case 3 : cout << "Kamu menang sebuah motor!\n";
        break;
        case 4 : cout << "Kamu menang sebuah mobil!\n";
        break;
        case 5 : cout << "Kamu menang sebuah rumah!\n";
        break;
    }
return 0;
}
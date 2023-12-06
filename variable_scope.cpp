#include <iostream>
using namespace std;

int nomorsaya = 3;

void cetaknum ();

int main ()
{
    int nomorsaya = 1;
    cetaknum ();
    cout << ::nomorsaya << '\n';
    return 0;
}

void cetaknum (){
    int nomorsaya = 2 << '\n';
    cout << ::nomorsaya;
}
#include <iostream>
using namespace std;

void garis ()
{
    cout << "------------------------" << '\n';
}

float ls (float a, float t)
{
    return ( a * t * 0.5);
}
float lspp (float p, float l)
{
    return (p * l);
}

int main ()
{
    
    int pil;
    do {
    garis ();
    cout << "----------MENU----------\n";
    garis ();
    cout << "1. Luas Segitiga\n";
    cout << "2. Luas Persegi Panjang\n";
    garis ();
    cout << "Pilih Menu : "; cin >> pil;
    switch (pil)
    {
        case 1 :     
        float a,t,luas;
        cout << "Alas : ";
        cin >> a;
        cout << "Tinggi : ";
        cin>> t;
        luas = ls (a, t);
        cout << "Luas Segitiga adalah : " << luas << '\n';
        garis ();
        break;

        case 2 :
        float p,l,ll;
        cout << "Panjang : ";
        cin >> p;
        cout << "Lebar : ";
        cin >> l;
        ll = lspp(p,l);
        cout << "Luas Persegi Panjang adalah : " << ll << '\n';
        garis ();
        break;
    }
    } while ( pil != 3);
    return 0;
}
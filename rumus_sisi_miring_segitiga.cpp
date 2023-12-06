#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    double a;
    double b;
    double c;

cout << "Masukan sisi A : "; cin >> a;
cout << "Masukan sisi B : "; cin >> b;

/*
a = pow (a, 2);
b = pow (b, 2);
c = sqrt (a + b); // rumus mencari sisi C

c = pow (c, 2);
a = pow (a, 2);
b = sqrt (c - a); // rumus mencari sisi b

c = pow (c, 2);
b = pow (b, 2);
a = sqrt (c - a); // rumuns mencari sisi a

*/

// atau
a = sqrt (pow (c,2) - pow (b,2)); // rumus mencari sisi A 
b = sqrt (pow (c,2) - pow (a,2)); // rumus mencari sisi B
c = sqrt (pow (a,2) + pow (b,2)); // rumus mencari sisi C

cout << "Hasilnya adalah :" << c << '\n'; //Jangn lupa diganti seusuai kebutuhan

return 0;
}


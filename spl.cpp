#include <iostream>
using namespace std;

int main()
{
    float a11, a12, a13, a21, a22, a23, a31, a32, a33, hasil;
    float h1, h2, h3, det1, det2, det3, det, x1, x2, x3;
    cout << "Masukan a11: "; cin >> a11;
    cout << "Masukan a12: "; cin >> a12;
    cout << "Masukan a13: "; cin >> a13;
    cout << "Masukan h1: "; cin >> h1;
    cout << "Masukan a21: "; cin >> a21;
    cout << "Masukan a22: "; cin >> a22;
    cout << "Masukan a23: "; cin >> a23;
    cout << "Masukan h2: "; cin >> h2;
    cout << "Masukan a31: "; cin >> a31;
    cout << "Masukan a32: "; cin >> a32;
    cout << "Masukan a33: "; cin >> a33;
    cout << "Masukan h3: "; cin >> h3;

    det = (a11 * a22 * a33) + (a12 * a23 * a31) + (a13 * a21 * a32) - (a13 * a22 * a31) - (a11 * a23 * a32) - (a12 * a21 * a33);
    cout << "Hasil Determinan: " << det << endl;
    det1 = (h1 * a22 * a33) + (a12 * a23 * h3) + (a13 * h2 * a32) - (a13 * a22 * h3) - (h1 * a23 * a32) - (a12 * h2 * a33);
    cout << "Hasil Determinan 1: " << det1 << endl;
    det2 = (a11 * h2 * a33) + (h1 * a23 * a31) + (a13 * a21 * h3) - (a13 * h2 * a31) - (a11 * a23 * h3) - (h1 * a21 * a33);
    cout << "Hasil Determinan 2: " << det2 << endl;
    det3 = (a11 * a22 * h3) + (a12 * h2 * a31) + (h1 * a21 * a32) - (h1 * a22 * a31) - (a11 * h2 * a32) - (a12 * a21 * h3);
    cout << "Hasil Determinan 3: " << det3 << endl;
    x1 = det1 / det;
    cout << "Diperoleh X1: " << x1 << endl;
    x2 = det2 / det;
    cout << "Diperoleh X2: " << x2 << endl;
    x3 = det3 / det;
    cout << "Diperoleh X3: " << x3 << endl;

    return 0;
}

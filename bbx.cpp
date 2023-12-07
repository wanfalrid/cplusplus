#include <iostream>
using namespace std;

float calculateArea(float a, float t)
{
    return (0.5 * a * t);
}

int main()
{
    float a, t, area;

    cout << "Enter the base: ";
    cin >> a;

    cout << "Enter the height: ";
    cin >> t;

    area = calculateArea(a, t);

    cout << "The area of the right triangle is: " << area << '\n';

    return 0;
}
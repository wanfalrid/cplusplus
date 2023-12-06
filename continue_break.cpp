#include <iostream>
using namespace std;

int main ()
{
    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            //break; //angka akan berhenti di angka 12
            continue; //hanya angka 13 yang tidak ada
        }
        cout << i << '\n';
    }
return 0;
}
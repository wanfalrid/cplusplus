#include <iostream>

using namespace std;

int main ()
{
    string nama;


    //if(nama.empty())
    //jika kita tidak mengetikan apa-apa dan langsung enter maka program lansung running
    while(nama.empty()) // #1 program tidak akan running sebelum kita mengetikan sesuatu
    //while(1==1) //#2
    {
        cout << "Masukan nama kamu : "; //#1
        getline (cin, nama); //#1
        //cout << "TOLONG!"; //#2
    }

    cout << "Hallo, " << nama;

}
#include <iostream>
using namespace std;

string concatStrings(string string1, string string2);

int main (){
    string namaAwal = "Najwan Naufal";
    string namaAkhir = "Alfarid";
    string namaLengkap = concatStrings(namaAwal, namaAkhir);

    cout << "Hello " << namaLengkap;

    return 0;
}

string concatStrings(string string1, string string2){
    return string1 +" " + string2 ;
}
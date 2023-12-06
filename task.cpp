#include <iostream>
using namespace std;

int pertambahan (int x, int y) {
    return x + y;
}

int pengurangan (int x, int y){
    return x - y;
}

int perkalian (int x, int y){
    return x * y;
}

int pembagian (int x, int y){
    return x / y;
}

void log(int result){
    cout << "hasilnya adalah " <<result << endl;
}
int main () {
    int soal1 = perkalian (5, 20);
    int soal2 = pertambahan (5, 20);
    int soal3 = pengurangan (20,5);
    int soal4 = pembagian (20, 5);
    log (soal1);
    log (soal2);
    log (soal3);
    log (soal4);
    
    return 0;
}
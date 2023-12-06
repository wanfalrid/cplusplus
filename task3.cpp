#include <iostream>
#include <chrono>
#include <iomanip> // Diperlukan untuk format tanggal
using namespace std;

void log(int result) {
    cout << "Usia anda sekarang adalah: " << result << " tahun" << endl;
}

int main() {
    auto date = chrono::system_clock::now();
    time_t tt = chrono::system_clock::to_time_t(date);
    
    struct tm timeinfo;
    localtime_s(&timeinfo, &tt);
    int tahun_sekarang = timeinfo.tm_year + 1900;

    int tahun;
    cout << "Masukkan tahun kelahiran anda: ";
    cin >> tahun;

    int usia = tahun_sekarang - tahun;
    log(usia);

    return 0;
}

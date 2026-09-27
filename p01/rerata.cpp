// Lab porting: pindahkan rerata.py ke C++.
// Lengkapi tiga bagian bertanda TODO, lalu bangun dengan baseline kelas.
#include <iomanip>
#include <iostream>

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;

    // TODO 1
    int jumlah = tugas + uts + uas;

    // TODO 2
    double rerata = jumlah / 3.0;

    // TODO 3
    std::cout << "Jumlah : " << jumlah << "\n";
    std::cout << "Rata-rata : " << std::fixed << std::setprecision(2) << rerata << "\n";

    return 0;
}
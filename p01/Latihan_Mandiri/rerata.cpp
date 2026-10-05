// Menghitung rata-rata dari lima nilai.
#include <iomanip>
#include <iostream>

int main() {
    int kehadiran = 95;
    int tugas1 = 80;
    int tugas2 = 85;
    int uts = 75;
    int uas = 90;

    // TODO 1
    int jumlah = kehadiran + tugas1 + tugas2 + uts + uas;

    // TODO 2
    double rerata = jumlah / 5.0;

    // TODO 3
    std::cout << "Jumlah : " << jumlah << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Rata-rata : " << rerata << "\n";

    return 0;
}
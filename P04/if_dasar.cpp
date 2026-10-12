#include <iostream>
using namespace std;

int main() {
    double nilai_akhir = 0;
    cout << "Nilai akhir: ";
    cin >> nilai_akhir;

    if (nilai_akhir < 60) 
    cout << "Peringatan: nilai di bawah 60, segera konsultasi.\n";
    cout << "Silakan periksa kembali nilai Anda.\n";
    

    cout << "Terima kasih.\n";
    return 0;
}
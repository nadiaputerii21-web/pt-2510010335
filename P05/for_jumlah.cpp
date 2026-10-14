
#include <iostream>
using namespace std;

int main() {
    int jumlah = 0;
    cout << "Berapa nilai yang akan dimasukkan? ";
    cin >> jumlah;

    double total = 0;
    int banyak_lulus = 0;

    for (int i = 1; i <= jumlah; i++) {
        double nilai = 0;

        cout << "Nilai ke-" << i << ": ";
        cin >> nilai;

        total += nilai;

        if (nilai >= 60) {
            banyak_lulus++;
        }
    }

    cout << "Total        : " << total << "\n";
    cout << "Banyak lulus : " << banyak_lulus << "\n";

    if (jumlah > 0) {
        cout << "Rata-rata    : " << total / jumlah << "\n";
    } else {
        cout << "Rata-rata    : tidak dapat dihitung\n";
    }

    return 0;
}
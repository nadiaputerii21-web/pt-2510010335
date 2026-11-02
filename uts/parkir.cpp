// UTS Praktikum Paket A: Parkir Kampus.
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main() {
    const int TARIF_AWAL_MOTOR = 2000;
    const int TARIF_LANJUT_MOTOR = 1000;
    const int MAKS_MOTOR = 10000;
    const int TARIF_AWAL_MOBIL = 5000;
    const int TARIF_LANJUT_MOBIL = 3000;
    const int MAKS_MOBIL = 30000;

    int jumlah = 0;
    cout << "=== Parkir Kampus ===\n";
    cout << "Jumlah kendaraan: ";
    cin >> jumlah;

    while (cin.fail() || jumlah < 1) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Harus bilangan bulat paling sedikit 1. Jumlah kendaraan: ";
        cin >> jumlah;
    }
    cin.ignore(1000, '\n');

    cout << fixed << setprecision(2);

    int total = 0;
    int banyak_motor = 0;
    int banyak_mobil = 0;

    // TODO 5a
    int biaya_tertinggi = -1;
    string plat_tertinggi = "";

    for (int i = 1; i <= jumlah; i++) {
        string plat;
        char jenis = ' ';
        int durasi = 0;

        cout << "\n--- Kendaraan ke-" << i << " dari " << jumlah << " ---\n";

        // TODO 1: Membaca dan memvalidasi plat
        bool plat_valid = false;

        while (!plat_valid) {
            cout << "Plat nomor : ";
            getline(cin, plat);

            bool hanya_spasi = true;

            for (char c : plat) {
                if (!isspace(static_cast<unsigned char>(c))) {
                    hanya_spasi = false;
                }
            }

            if (hanya_spasi) {
                cout << "Plat tidak boleh kosong.\n";
            } else {
                plat_valid = true;

                for (char &c : plat) {
                    c = static_cast<char>(
                        toupper(static_cast<unsigned char>(c))
                    );
                }
            }
        }

        // TODO 2: Membaca dan memvalidasi jenis
        cout << "Jenis (M/R): ";
        cin >> jenis;

        jenis = static_cast<char>(
            toupper(static_cast<unsigned char>(jenis))
        );

        while (jenis != 'M' && jenis != 'R') {
            cin.ignore(1000, '\n');

            cout << "Hanya M (motor) atau R (roda empat). Jenis (M/R): ";
            cin >> jenis;

            jenis = static_cast<char>(
                toupper(static_cast<unsigned char>(jenis))
            );
        }

        cin.ignore(1000, '\n');

        // TODO 3: Membaca dan memvalidasi durasi
        cout << "Durasi (jam, 1-24): ";
        cin >> durasi;

        while (cin.fail() || durasi < 1 || durasi > 24) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Harus bilangan bulat 1 sampai 24. Durasi (jam): ";
            cin >> durasi;
        }

        cin.ignore(1000, '\n');

        // TODO 4: Menghitung biaya parkir
        int biaya = 0;
        string nama_jenis;

        if (jenis == 'M') {
            nama_jenis = "Motor";

            biaya = TARIF_AWAL_MOTOR
                    + (durasi - 1) * TARIF_LANJUT_MOTOR;

            if (biaya > MAKS_MOTOR) {
                biaya = MAKS_MOTOR;
            }

            banyak_motor++;
        } else {
            nama_jenis = "Mobil";

            biaya = TARIF_AWAL_MOBIL
                    + (durasi - 1) * TARIF_LANJUT_MOBIL;

            if (biaya > MAKS_MOBIL) {
                biaya = MAKS_MOBIL;
            }

            banyak_mobil++;
        }

        cout << "  " << left << setw(12) << plat
             << setw(8) << nama_jenis
             << right << setw(4) << durasi
             << " jam" << setw(9) << biaya << "\n";

        total += biaya;

        // TODO 5b: Memperbarui biaya tertinggi
        if (biaya > biaya_tertinggi) {
            biaya_tertinggi = biaya;
            plat_tertinggi = plat;
        }
    }

    cout << "\n=== Rekap Hari Ini ===\n";
    cout << "Jumlah kendaraan : " << jumlah << "\n";
    cout << "Motor            : " << banyak_motor << "\n";
    cout << "Mobil            : " << banyak_mobil << "\n";
    cout << "Total pendapatan : " << total << "\n";
    cout << "Rata-rata biaya  : "
         << static_cast<double>(total) / jumlah << "\n";

    // TODO 5c: Mencetak biaya tertinggi
    cout << "Tertinggi        : " << plat_tertinggi
         << " (" << biaya_tertinggi << ")\n";

    cout << "\nSebaran jenis:\n";

    // TODO 6: Sebaran jenis dengan perulangan bersarang
    for (int i = 0; i < 2; i++) {
        string label;
        int banyak;

        if (i == 0) {
            label = "Motor";
            banyak = banyak_motor;
        } else {
            label = "Mobil";
            banyak = banyak_mobil;
        }

        cout << left << setw(6) << label << "| ";

        for (int j = 0; j < banyak; j++) {
            cout << "#";
        }

        cout << " " << banyak << "\n";
    }

    return 0;
}
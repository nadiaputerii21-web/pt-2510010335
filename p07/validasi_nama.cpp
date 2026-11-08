#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    bool sah = false;

    do {
        cout << "Nama: ";
        getline(cin, nama);

        int panjang = nama.length();
        bool ada_huruf = false;
        bool ada_angka = false;
        int jumlah_huruf = 0;

        for (int i = 0; i < panjang; i++) {
            if (nama[i] != ' ') {
                ada_huruf = true;
            }
            if (isdigit(nama[i])) {
                ada_angka = true;
            }
            if (isalpha(nama[i])) {
                jumlah_huruf++;
            }
        }

        if (!ada_huruf) {
            cout << "Nama tidak boleh kosong.\n";
        } else if (jumlah_huruf < 3) {
            cout << "Nama harus memiliki minimal 3 huruf.\n";
        } else if (ada_angka) {
            cout << "Nama tidak boleh mengandung angka.\n";
        } else {
            sah = true;
        }
    } while (!sah);

    cout << "Nama tersimpan: " << nama << "\n";
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    int umur = 0;
    string nama_pertama;

    cout << "Umur: ";
    cin >> umur;

    cin.ignore(1000, '\n');

    cout << "Nama: ";
    getline(cin, nama_pertama);

    cout << "\nUmur         : " << umur << "\n";
    cout << "Nama pertama : [" << nama_pertama << "] panjang "
         << nama_pertama.length() << "\n";

    return 0;
}
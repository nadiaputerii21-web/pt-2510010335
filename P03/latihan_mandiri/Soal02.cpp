#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Bilangan pembagi tidak boleh nol.\n";
    } else {
        cout << a << " dibagi " << b << " adalah "
             << a / b << " sisa " << a % b << "\n";
    }

    return 0;
}
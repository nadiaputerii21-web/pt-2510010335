#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Masukkan bilangan A: ";
    cin >> A;

    cout << "Masukkan bilangan B: ";
    cin >> B;

    cout << "Masukkan bilangan C: ";
    cin >> C;

    if (A >= B && A >= C) {
        cout << "Bilangan terbesar adalah A: " << A;
    } else if (B >= C) {
        cout << "Bilangan terbesar adalah B: " << B;
    } else {
        cout << "Bilangan terbesar adalah C: " << C;
    }

    return 0;
}
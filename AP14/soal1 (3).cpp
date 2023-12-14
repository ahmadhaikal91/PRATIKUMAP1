#include <iostream>
using namespace std;

int main() {
    int X, Y;

    // Meminta pengguna memasukkan dua bilangan integer
    cout << "Masukkan nilai X: ";
    cin >> X;

    cout << "Masukkan nilai Y: ";
    cin >> Y;

    // Menampilkan nilai sebelum pertukaran
    cout << "Sebelum pertukaran: X = " << X << ", Y = " << Y << endl;

    // Melakukan pertukaran nilai
    int temp = X;
    X = Y;
    Y = temp;

    // Menampilkan nilai setelah pertukaran
    cout << "Setelah pertukaran: X = " << X << ", Y = " << Y << endl;

    return 0;
}
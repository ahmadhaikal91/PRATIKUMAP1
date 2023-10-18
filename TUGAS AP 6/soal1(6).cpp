#include <iostream>
using namespace std;

int main() {
    const int jumlah_data = 10;
    double data[jumlah_data];
    double total = 0;
    double nilai_terkecil, nilai_terbesar;

    for (int i = 0; i < jumlah_data; i++) {
        cout << "Masukkan bilangan " << i + 1 << ": ";
        cin >> data[i];

        total += data[i];

        if (i == 0) {
            nilai_terkecil = nilai_terbesar = data[i];
        } else {
            if (data[i] < nilai_terkecil) {
                nilai_terkecil = data[i];
            }
            if (data[i] > nilai_terbesar) {
                nilai_terbesar = data[i];
            }
        }
    }

    double rata_rata = total / jumlah_data;

    cout << "Nilai Rata-rata: " << rata_rata << endl;
    cout << "Nilai Terkecil: " << nilai_terkecil << endl;
    cout << "Nilai Terbesar: " << nilai_terbesar << endl;

    return 0;
}
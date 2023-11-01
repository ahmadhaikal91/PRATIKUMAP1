#include <iostream>
using namespace std;

int main() {
    double tabunganUSD = 12.000; // Jumlah tabungan dalam US Dollar
    double tabunganEuro = 20.000; // Jumlah tabungan dalam Euro
    double kursUSD_to_IDR = 15.000; // Kurs 1 US Dollar ke Rupiah
    double kursEuro_to_USD = 0.997; // Kurs 1 Euro ke US Dollar
    double hargaMobilIDR = 425.000000; // Harga mobil dalam Rupiah

    // Menghitung total tabungan dalam US Dollar
    double totalTabunganUSD = tabunganUSD + (tabunganEuro * kursEuro_to_USD);

    // Menghitung total tabungan dalam Rupiah
    double totalTabunganIDR = totalTabunganUSD * kursUSD_to_IDR;

    // Menghitung sisa uang setelah membeli mobil
    double sisaUangIDR = totalTabunganIDR - hargaMobilIDR;

    cout << "Total tabungan Pak Anto setelah konversi ke Rupiah: " << totalTabunganIDR << " IDR" << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: " << sisaUangIDR << " IDR" << endl;

    return 0;
}
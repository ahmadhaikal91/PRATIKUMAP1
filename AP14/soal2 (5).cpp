#include <iostream>
using namespace std;

int main() {
    // Tarif listrik sesuai dengan daya tertentu dalam rupiah per kWh
    int tarif_900VA = 1350;
    int tarif_1300VA = 1440;
    int tarif_2200VA = 1450;
    int tarif_3500VA = 1500;

    // Daya rumah yang digunakan dalam VA
    int daya_rumah = 2200;

    // Rincian penggunaan listrik per hari untuk setiap perangkat dalam Wh
    int penggunaan_AC = 800;
    int penggunaan_kulkas = 200;
    int penggunaan_strika = 150;
    int penggunaan_mesin_cuci = 250;
    int penggunaan_lampu = 250;
    int penggunaan_lainnya = 100;

    // Menghitung total penggunaan listrik per hari dalam kWh
    double total_per_hari = (penggunaan_AC + penggunaan_kulkas + penggunaan_strika + penggunaan_mesin_cuci + penggunaan_lampu + penggunaan_lainnya) / 1000.0;

    // Menghitung total penggunaan listrik per bulan dalam kWh (diasumsikan 30 hari)
    double total_per_bulan = total_per_hari * 30;

    // Memilih tarif sesuai dengan daya rumah yang digunakan
    int tarif_per_kwh = 0;
    switch (daya_rumah) {
        case 900:
            tarif_per_kwh = tarif_900VA;
            break;
        case 1300:
            tarif_per_kwh = tarif_1300VA;
            break;
        case 2200:
            tarif_per_kwh = tarif_2200VA;
            break;
        case 3500:
            tarif_per_kwh = tarif_3500VA;
            break;
        default:
            cout << "Daya tidak valid!" << endl;
            return 1;
    }

    // Menghitung biaya pembayaran listrik per bulan
    double biaya_bulanan = total_per_bulan * tarif_per_kwh;

    cout << "Biaya pembayaran listrik tiap bulannya adalah: Rp." << biaya_bulanan << endl;

    return 0;
}
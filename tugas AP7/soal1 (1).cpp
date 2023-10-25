#include <iostream>

int main() {
    double panjang_pita_meter = 12.0;
    double panjang_ikatan_bunga_cm = 45.0;

    double panjang_pita_cm = panjang_pita_meter * 100.0;
    int jumlah_ikatan = static_cast<int>(panjang_pita_cm / panjang_ikatan_bunga_cm);
    double sisa_pita_cm = panjang_pita_cm - (jumlah_ikatan * panjang_ikatan_bunga_cm);

    std::cout << "Jumlah ikatan bunga rangkai yang dapat dibuat: " << jumlah_ikatan << std::endl;
    std::cout << "Panjang pita yang belum dipakai (dalam cm): " << sisa_pita_cm << std::endl;

    return 0;
}
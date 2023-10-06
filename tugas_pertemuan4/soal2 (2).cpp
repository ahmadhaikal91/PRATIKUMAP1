#include <iostream>

int main() {
    // Mengambil input dari pengguna
    double panjang_kertas, lebar_kertas, margin_atas, margin_bawah, margin_kiri, margin_kanan, ukuran_titik;
    std::string spasi_ganda;

    std::cout << "Panjang kertas (inci): ";
    std::cin >> panjang_kertas;

    std::cout << "Lebar kertas (inci): ";
    std::cin >> lebar_kertas;

    std::cout << "Margin atas (inci): ";
    std::cin >> margin_atas;

    std::cout << "Margin bawah (inci): ";
    std::cin >> margin_bawah;

    std::cout << "Margin kiri (inci): ";
    std::cin >> margin_kiri;

    std::cout << "Margin kanan (inci): ";
    std::cin >> margin_kanan;

    std::cout << "Ukuran titik suatu garis (pt): ";
    std::cin >> ukuran_titik;

    std::cout << "Garis diberi spasi ganda? (ya/tidak): ";
    std::cin >> spasi_ganda;

    // Menghitung panjang maksimum sebuah garis
    double panjang_garis = lebar_kertas - margin_kiri - margin_kanan;

    // Menghitung jumlah karakter dalam satu baris
    if (spasi_ganda == "ya") {
        ukuran_titik *= 72;
    }

    int karakter_per_baris = static_cast<int>(panjang_garis / ukuran_titik);

    // Menghitung jumlah baris yang dapat dicetak
    double tinggi_garis = panjang_kertas - margin_atas - margin_bawah;
    int jumlah_baris = static_cast<int>(tinggi_garis / ukuran_titik);

    // Menampilkan hasil
    std::cout << "Jumlah karakter dalam satu baris: " << karakter_per_baris << std::endl;
    std::cout << "Jumlah baris yang dapat dicetak: " << jumlah_baris << std::endl;

    return 0;
}
#include <iostream>
#include <string>
#include <iomanip>

struct Barang {
    std::string kode;
    std::string nama;
    int jumlah;
    int hargaSatuan;
};

const int JUMLAH_DATA = 20;

int main() {
    Barang penjualan[JUMLAH_DATA];
    int totalHarga = 0;

    // Memasukkan data penjualan
    for (int i = 0; i < JUMLAH_DATA; ++i) {
        std::cout << "Masukkan data penjualan ke-" << i + 1 << ":\n";
        std::cout << "Kode barang: ";
        std::cin >> penjualan[i].kode;
        std::cout << "Nama barang: ";
        std::cin.ignore(); // Clear input buffer
        std::getline(std::cin, penjualan[i].nama);
        std::cout << "Jumlah: ";
        std::cin >> penjualan[i].jumlah;
        std::cout << "Harga satuan: Rp.";
        std::cin >> penjualan[i].hargaSatuan;

        totalHarga += penjualan[i].jumlah * penjualan[i].hargaSatuan;
    }

    // Menghitung keuntungan
    double keuntungan = 0.1 * totalHarga;

    // Menampilkan hasil
    std::cout << "\nTotal harga penjualan: Rp." << totalHarga << std::endl;
    std::cout << "Keuntungan: Rp." << keuntungan << std::endl;
    std::cout << "Total dana yang diperoleh (dengan keuntungan): Rp." << totalHarga + keuntungan << std::endl;

    return 0;
}
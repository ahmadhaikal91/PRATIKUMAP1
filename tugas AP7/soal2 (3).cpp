#include <iostream>

int main() {
    int a, b, c;
    int x = 1;

    // Membaca tiga bilangan bulat (a, b, c) dari pengguna
    std::cout << "Masukkan nilai a: ";
    std::cin >> a;

    std::cout << "Masukkan nilai b: ";
    std::cin >> b;

    std::cout << "Masukkan nilai c: ";
    std::cin >> c;

    // Menghitung ekspresi 6 * (a * x^2 + b * x + c) untuk x = 1
    int hasil = 6 * (a * x * x + b * x + c);

    // Menampilkan hasil perhitungan
    std::cout << "Hasil perhitungan 6 * (a * x^2 + b * x + c) untuk x = 1 adalah: " << hasil << std::endl;

    return 0;
}
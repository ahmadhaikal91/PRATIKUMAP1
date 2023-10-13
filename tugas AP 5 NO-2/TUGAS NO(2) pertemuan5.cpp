#include <iostream>

using namespace std;

int main() {
      int jam = 1;
      int menit = 59;
      int detik = 59;

      // Menampilkan waktu awal
      std::cout << "Kondisi awal: " << jam << ":" << menit <<           ":" << detik << std::endl;

    // Tambahkan 15 detik
    detik += 15;

    // Periksa dan sesuaikan waktu
    if (detik >= 60) {
        detik -= 60;
        menit++;
    }
    if (menit >= 60) {
        menit -= 60;
        jam++;
    }
    if (jam >= 24) {
        jam = 0; // Format jam 24 jam
    }

    // Tampilkan waktu yang telah diubah
    cout << "Waktu setelah Nextday: " << jam << ":" << menit << ":" << detik << endl;

    return 0;
}
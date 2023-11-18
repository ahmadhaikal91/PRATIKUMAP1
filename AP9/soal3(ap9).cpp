#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Menampilkan langkah-langkah
        cout << "Iterasi: left=" << left << ", right=" << right << ", mid=" << mid << endl;

        // Jika x berada di tengah array
        if (arr[mid] == x)
            return mid;

        // Jika x lebih kecil, cari di sebelah kiri mid
        if (arr[mid] < x)
            left = mid + 1;

        // Jika x lebih besar, cari di sebelah kanan mid
        else
            right = mid - 1;
    }

    // Jika elemen tidak ditemukan
    return -1;
}

void displaySearch(int index) {
    if (index != -1) {
        cout << "Elemen ditemukan pada index ke-" << index << endl;
    } else {
        cout << "Elemen tidak ditemukan dalam array." << endl;
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchElement = 23;

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Mencari elemen " << searchElement << " di dalam array..." << endl;
    int result = binarySearch(arr, 0, size - 1, searchElement);
    displaySearch(result);

    return 0;
}
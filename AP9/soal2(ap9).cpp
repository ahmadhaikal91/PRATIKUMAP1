#include <iostream>
using namespace std;

int sentinelLinearSearch(int arr[], int n, int x) {
    int last = arr[n - 1];
    arr[n - 1] = x;

    int i = 0;
    while (arr[i] != x)
        i++;

    arr[n - 1] = last;

    if ((i < n - 1) || (x == arr[n - 1]))
        return i;
    else
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
    int arr[] = {5, 8, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int searchElement = 9;

    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Mencari elemen " << searchElement << " di dalam array..." << endl;
    int result = sentinelLinearSearch(arr, size, searchElement);
    displaySearch(result);

    return 0;
}
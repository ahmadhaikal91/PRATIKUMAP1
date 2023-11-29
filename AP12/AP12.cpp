#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        swap(arr[max_idx], arr[i]);
    }
}

int main() {
    int data[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Data sebelum diurutkan secara menurun:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    selectionSort(data, n);

    cout << "\nData setelah diurutkan secara menurun:\n";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}
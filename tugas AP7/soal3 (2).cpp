#include <iostream>

void star1(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void star2(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < height - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void star3(int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            std::cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            std::cout << " ";
        }
        for (int j = 0; j < height - i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;
    std::cout << "Masukkan tinggi Star: ";
    std::cin >> height;

    std::cout << "Star 1:" << std::endl;
    star1(height);

    std::cout << "Star 2:" << std::endl;
    star2(height);

    std::cout << "Star 3:" << std::endl;
    star3(height);

    return 0;
}
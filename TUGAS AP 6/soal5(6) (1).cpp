#include <iostream>

int main() {
    int n = 26;
    char start_char = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            std::cout << static_cast<char>(start_char + j);
        }
        std::cout << std::endl;
    }

    return 0;
}
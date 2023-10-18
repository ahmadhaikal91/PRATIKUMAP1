#include <iostream>

int main() {
    double S = 0;
    for (int i = 1; i <= 1000; i++) {
        if (i % 2 == 1) {
            S += 1.0 / i;
        } else {
            S -= 1.0 / i;
        }
    }

    std::cout << "S=1 -1/2+1/3-1/4+...+1/1000 =" << std::endl;
    std::cout << "Nilai S adalah: " << S << std::endl;
    return 0;
}
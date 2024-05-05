#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        std::cout << "I will never loose deadline!" << std::endl;
    }

    return 0;
}

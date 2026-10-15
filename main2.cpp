#include <iostream>
#include <stdexcept>

unsigned long long factorial(int n) {
    if (n < 0) {
        throw std::invalid_argument("Факториал не определён для отрицательных чисел");
    }
    
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    try {
        std::cout << "5! = " << factorial(5) << std::endl;   // 120
        std::cout << "10! = " << factorial(10) << std::endl; // 3628800
        std::cout << "0! = " << factorial(0) << std::endl;   // 1
    } catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    return 0;
}
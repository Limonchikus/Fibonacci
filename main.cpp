#include <iostream>

int main() {
    // Здесь вычисляем числа Фибоначчи
    double f0 = 0.0;
    double f1 = 1.0;
    double f2 = f0 + f1;
    double f3 = f1 + f2;
    double f4 = f2 + f3;

    // Здесь осуществляется вывод найденных чисел Фибоначчи в консоль
    std::cout << "Fibonacci number 1: " << f0 << std::endl;
    std::cout << "Fibonacci number 2: " << f1 << std::endl;
    std::cout << "Fibonacci number 3: " << f2 << std::endl;
    std::cout << "Fibonacci number 4: " << f3 << std::endl;
    std::cout << "Fibonacci number 5: " << f4 << std::endl;

    return 0;
}

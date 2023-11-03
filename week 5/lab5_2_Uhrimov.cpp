#include <iostream>
#include <cmath>
#include <iomanip> // Для форматованого виведення

double f(double x) {
    return sqrt(sin(x) + x * x);
}

int main() {
    double a, b, h;

    // Введення початку інтервалу (a)
    std::cout << "Введіть початок інтервалу (a): ";
    std::cin >> a;

    // Введення кінця інтервалу (b)
    std::cout << "Введіть кінець інтервалу (b): ";
    std::cin >> b;

    // Введення кроку (h)
    std::cout << "Введіть крок (h): ";
    std::cin >> h;

    if (h <= 0) {
        std::cout << "Крок (h) має бути додатнім числом." << std::endl;
        return 1; // Вихід з програми з помилкою
    }

    // Виведення заголовка таблиці
    std::cout << "-----------------------------" << std::endl;
    std::cout << ":       X       :       Y       :" << std::endl;
    std::cout << "-----------------------------" << std::endl;

    // Табулювання та виведення результатів
    double x = a;
    while (x <= b) {
        double y = f(x);
        std::cout << ": " << std::setw(13) << x << " : " << std::setw(13) << y << " :" << std::endl;
        x += h;
    }

    std::cout << "-----------------------------" << std::endl;

    return 0;
}

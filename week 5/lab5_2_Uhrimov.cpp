#include <iostream>
#include <cmath>
#include <iomanip> // Для форматованого виведення

using namespace std;

double f(double x) {
    return sqrt(sin(x) + x * x);
}

int main() {
    double a, b, h;

    // Введення початку інтервалу (a)
    cout << "Введіть початок інтервалу (a): ";
    cin >> a;

    // Введення кінця інтервалу (b)
    cout << "Введіть кінець інтервалу (b): ";
    cin >> b;

    // Введення кроку (h)
    cout << "Введіть крок (h): ";
    cin >> h;

    if (h <= 0) {
        cout << "Крок (h) має бути додатнім числом." << endl;
        return 1; // Вихід з програми з помилкою
    }

    // Виведення заголовка таблиці
    cout << "-----------------------------" << endl;
    cout << ":       X       :       Y       :" << endl;
    cout << "-----------------------------" << endl;

    // Табулювання та виведення результатів
    double x = a;
    while (x <= b) {
        double y = f(x);
        cout << ": " << setw(13) << x << " : " << setw(13) << y << " :" << endl;
        x += h;
    }

    cout << "-----------------------------" << endl;

    return 0;
}

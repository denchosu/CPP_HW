#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
    // 6
    int value;
    cout << "Enter a value: ";
    cin >> value;
    bool answer = (value >= 0 && value < 10) ||
                  ((value * 2 < 20) && (value - 2 > -2)) ||
                  ((value - 1 > 1) && ((value - 1) / 2 < 10)) ||
                  (value == 111);
    cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;

    // 7
    double num1, num2, num3, num4, num5;
    cout << "Enter five float numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << fixed << setprecision(1) << num1 << endl;
    cout << fixed << setprecision(2) << num2 << endl;
    cout << fixed << setprecision(6) << num3 << endl;
    cout << fixed << setprecision(2) << num4 << endl;
    cout << fixed << setprecision(0) << num5 << endl;

    // 8
    int numW, numL;
    float epsilon = 0.000001f;

    cout << "Введіть перше число: ";
    cin >> numW;

    cout << "Введіть друге число: ";
    cin >> numL;


    if (num1 == 0 || num2 == 0) {
        cout << "Нулем бути не може(" << endl;
    }
    else {

        float result1 = 1.0f / numW;
        float result2 = 1.0f / numL;

        if (fabs(result1 - result2) < epsilon) {
            cout << "Результати однакові (by " << epsilon << " epsilon)" << endl;
        }
        else {
            cout << "Результати різні" << endl;
        }

    // 9
    int num6, num7, num8, num9;
    cout << "Enter four integer numbers in the range from 1 to 255:" << endl;
    cin >> num6 >> num7 >> num8 >> num9;
    if (num6 >= 1 && num6 <= 255 && num7 >= 1 && num7 <= 255 &&
        num8 >= 1 && num8 <= 255 && num9 >= 1 && num9 <= 255) {
        cout << num6 << "." << num7 << "." << num8 << "." << num9 << endl;
    } else {
        cout << "Invalid input. Numbers must be in the range from 1 to 255." << endl;
    }

    return 0;
}

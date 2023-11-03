#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

using namespace std;

int main()

{
    int a = 4;
    double b = 3.141, result;
    result = (0.75 * pow(M_E, 1 - b) + 0.31 * pow(M_E, 1 - a)) / (0.731 + pow(sin(b / a) * M_PI, 2));
    cout << result << endl;

    result = (pow(a, 2) - pow(b, 2)) / (a + b) * (a - b);

    int aa = 10;
    double bb = 0.5, result_2;
    result_2 = ((0.314 * pow(M_E, aa) - (0.512 * pow(M_E, bb))) / (sin((bb / 3) * M_PI))) * log(aa);


    cout << result_2;

    return 0;
}
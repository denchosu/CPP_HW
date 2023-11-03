#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;
    string a;
    int count = 0;




    cout << "enter the number: ";
    cin >> number;

    if (number < 0 || number > 999) {
        exit(0);
    }
    else {
        a = to_string(number);


        const char* str = a.c_str();
        cout << str[0] << " " << str[1] << " " << str[2];

        for (int i = 0; i < 3; i++) {
            int digit = str[i] - '0';
            if (digit < 5) {
                count++;
            }
        }
        cout << "\nnumbers that are < 5: ";
        cout << count;



    }


    int day;
    cout << "\nВведіть номер дня тижня (1 - Пн, 2 - Вт, ..., 7 - Нд): ";
    cin >> day;

    switch (day) {
    case 1:
        cout << "Понеділок:" << endl;
        cout << "1. C++" << endl;
        cout << "2. Java" << endl;
        cout << "3. Вища математика" << endl;
        cout << "4. Python" << endl;
        break;
    case 2:
        cout << "Вівторок:" << endl;
        cout << "1. Вища математика" << endl;
        cout << "2. Python" << endl;
        cout << "3. Англійська мова" << endl;
        break;
    case 3:
        cout << "Середа:" << endl;
        cout << "1. C++" << endl;
        cout << "2. Java" << endl;
        cout << "3. Англійська мова" << endl;
        cout << "4. Філософія" << endl;
        break;
    case 4:
        cout << "Четвер:" << endl;
        cout << "1. Python" << endl;
        cout << "2. Вища математика" << endl;
        cout << "3. Java" << endl;
        cout << "4. Англійська мова" << endl;
        break;
    case 5:
        cout << "П'ятниця:" << endl;
        cout << "1. C++" << endl;
        cout << "2. Вища математика" << endl;
        cout << "3. Java" << endl;
        cout << "4. Філософія" << endl;
        break;
    case 6:
        cout << "Субота: Вихідний" << endl;
        break;
    case 7:
        cout << "Неділя: Вихідний" << endl;
        break;
    default:
        cout << "День тижня не визначено" << endl;
    }

    return 0;
}


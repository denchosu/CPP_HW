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
    cout << "\n������ ����� ��� ����� (1 - ��, 2 - ��, ..., 7 - ��): ";
    cin >> day;

    switch (day) {
    case 1:
        cout << "��������:" << endl;
        cout << "1. C++" << endl;
        cout << "2. Java" << endl;
        cout << "3. ���� ����������" << endl;
        cout << "4. Python" << endl;
        break;
    case 2:
        cout << "³������:" << endl;
        cout << "1. ���� ����������" << endl;
        cout << "2. Python" << endl;
        cout << "3. ��������� ����" << endl;
        break;
    case 3:
        cout << "������:" << endl;
        cout << "1. C++" << endl;
        cout << "2. Java" << endl;
        cout << "3. ��������� ����" << endl;
        cout << "4. Գ�������" << endl;
        break;
    case 4:
        cout << "������:" << endl;
        cout << "1. Python" << endl;
        cout << "2. ���� ����������" << endl;
        cout << "3. Java" << endl;
        cout << "4. ��������� ����" << endl;
        break;
    case 5:
        cout << "�'������:" << endl;
        cout << "1. C++" << endl;
        cout << "2. ���� ����������" << endl;
        cout << "3. Java" << endl;
        cout << "4. Գ�������" << endl;
        break;
    case 6:
        cout << "������: ��������" << endl;
        break;
    case 7:
        cout << "�����: ��������" << endl;
        break;
    default:
        cout << "���� ����� �� ���������" << endl;
    }

    return 0;
}


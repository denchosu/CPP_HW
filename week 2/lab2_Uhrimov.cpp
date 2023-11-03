#include <cmath>
#include <iostream>

using namespace std;

int task1()

{
	
	float y;
	cin >> y;
	float x;
	cin >> x;
	float a;
	cin >> a;
	float c;
	cin >> c;

	if (x <= 0) {
		y = pow(2 * x, 2) + a;
		cout << (y);
	}
	else if (x > 0) {
		y = (x + 3 * a)* c;
		cout << (y);
	}
	return 0;
}

int task2()

{
	double x;
	cout << "\nenter a first number: ";
	cin >> x;
	double y;
	cout << "\nenter a second number: ";
	cin >> y;

	double lineEquation = (-x + 2);
	
	if (x >= 0 && y >= 0 && y <= 2 && x <= 2 && y < -x + 2) {
		cout << "+";
	}
	else {
		cout << "-";
	}

	return 0;

}

int main()
{
	task1();
	task2();
	return 0;
}
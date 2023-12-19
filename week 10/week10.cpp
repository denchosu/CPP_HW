#include <iostream>
#include <string>

using namespace std;

void swapAndPrint(int m[]);
void printA(int m[], int a);
void secondMax(int m[]);
void ifNull(int m[]);

int main() {

  int m[12] = {15, 0, 17, 10, 81, 63, 31, 381, 0, 313, 30, 151};
  int a;
  cout << "Enter the value: ";
  cin >> a;
  swapAndPrint(m);
  printA(m, a);
  secondMax(m);
  ifNull(m);
  return 0;
}

void swapAndPrint(int m[]) {
  int temp = 0;
  temp = m[0];
  m[0] = m[11];
  m[11] = temp;
  cout << "Array with swapped first and last numbers" << endl;
  for (int i = 0; i < 12; i++) {
      cout << m[i] << " ";
  }

  cout << endl;
}

void printA(int m[], int a) {
  int counter = 0;
  for (int i = 0; i < 12; i++) {
    if (m[i] > a) {
      counter++;
    }
  }
  cout << "Number of numbers greater than " << a << " : " << counter << endl;
}

void secondMax(int m[]) {
  int max = 0;
  int secondMax = 0;
  for (int i=0; i<12; i++) {
    if (m[i] > max) {
      max = m[i];
    }
  }
  for (int i=0; i<12; i++) {
    if (m[i] > secondMax && m[i] < max) {
      secondMax = m[i];
    }
    
  }
  cout << "Second max number: " << secondMax << endl;
}

void ifNull(int m[]) {
  int counter = 0;
  for (int i = 0; i < 12; i++) {
    if (m[i] == 0) {
      counter++;
    }
  }
  cout << "Number of nulls: " << counter << endl;
}
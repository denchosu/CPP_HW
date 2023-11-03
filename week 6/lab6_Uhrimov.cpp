#include <iostream>

int main() {
  int N;
  std::cout << "Введіть натуральне число N: ";
  std::cin >> N;

  int product = 1;
  int digit;

  while (N > 0) {
    digit = N % 10;
    if (digit % 2 != 0) {
      product *= digit;
    }
    N /= 10;
  }

  if (product == 1) {
    std::cout << "В числі немає непарних цифр." << std::endl;
  } else {
    std::cout << "Добуток непарних цифр числа: " << product << std::endl;
  }

  return 0;
}

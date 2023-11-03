#include <iostream>
#include <cmath>  
#include <iomanip>

  using namespace std; 
 
  int main() {



      double x, y;
      double x_values[5];
      double y_values[5];

      for (int i = 0; i < 5; i++) {
          cout << "Enter the value of x-" << i + 1 << ": ";
          cin >> x;
          x_values[i] = x;
          y = sin(5 * x) + x * x;
          y_values[i] = y;
      }

      cout << "Calculation results:" << endl;
      for (int i = 0; i < 5; i++) {
          cout << "For x-" << i + 1 << " = " << x_values[i] << ", y = " << y_values[i] << endl;
      }

      // 2

      cout << "second task";
    
      int n = 10; 
      double sum_of_squares = 0;

      for (int i = 0; i < n; i++) {
          int number;
          cout << "Enter a natural number " << i + 1 << ": ";
          cin >> number;

          double square = static_cast<double>(number * number);
          sum_of_squares += square;
      }

      double average = sum_of_squares / n;
      cout << "The average of the squares of the entered numbers: " << average << endl;
  }


   
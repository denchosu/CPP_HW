#include <iostream>
#include <string>

using namespace std;

const int m = 6;
const int n = 4;

// 2.0

void countEvenNumsInCol(int matrix[m][n], int col) {

  int evenCounterC = 0;

  for (int i = 0; i < m; i++) {
    if (matrix[i][col] % 2 == 0) {
      evenCounterC++;
    }
  }
  cout << "there is/are: " << evenCounterC << " even number(s) in that column"
       << endl;
}

int main() {
  int col = 0;
  cout << "enter a column number: ";
  cin >> col;
  int matrix[6][4] = {{1, 2, 3, 4},     {5, 6, 7, 8},     {9, 10, 11, 12},
                      {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}};

  countEvenNumsInCol(matrix, col);

  return 0;
}

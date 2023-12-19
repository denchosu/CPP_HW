#include <iostream>
#include <string>

using namespace std;

const int m = 4;
const int n = 3;

// 1.0

void countEvenNumsInRow(int matrix[m][n], int row) {

  int evenCounterR = 0;

  for (int j = 0; j < n; j++) {
    if (matrix[row][j] % 2 == 0) {
      evenCounterR++;
    }
  }
  cout << "there is/are: " << evenCounterR << " even number(s) in that row" << endl;
}

// 2.0

void countEvenNumsInCol(int matrix[m][n], int col) {

  int evenCounterC = 0;


  for (int i = 0; i < m; i++) {
    if (matrix[i][col] % 2 == 0) {
      evenCounterC++;
    }
  }
  cout << "there is/are: " << evenCounterC << " even number(s) in that row" << endl;
}

int main() {
  int row = 0;
  cout << "enter a row number: ";
  cin >> row;
  int col = 0;
  cout << "enter a column number: ";
  cin >> col;
  int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

  countEvenNumsInRow(matrix, row);
  countEvenNumsInCol(matrix, col);

  return 0;
}



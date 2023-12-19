#include <iostream>
#include <string>

using namespace std;

const int m = 5;
const int n = 7;

// 3.0

void sumOfElementsInEachRow(int matrix[m][n]) {
  for (int i = 0; i < m; i++) {
    int sum = 0;
    for (int j = 0; j < n; j++) {
      sum += matrix[i][j];
    }
    cout << "sum of elements in row " << i << ": " << sum << endl;
  }
}

int main() {
  int matrix[5][7] = {{1, 2, 3, 4, 5, 6, 7},
                      {8, 9, 10, 11, 12, 13, 14},
                      {15, 16, 17, 18, 19, 20, 21},
                      {22, 23, 24, 25, 26, 27, 28},
                      {29, 30, 31, 32, 33, 34, 35}};
  sumOfElementsInEachRow(matrix);
}

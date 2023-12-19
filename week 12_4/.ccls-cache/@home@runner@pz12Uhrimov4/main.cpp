#include <iostream>
#include <string>

using namespace std;

const int m = 4;
const int n = 6;

void sumOfElementsInEachColumn(int matrix[m][n]) {
  for (int j = 0; j < n; j++) {
    int sum = 0;  // Initialize the sum for each column
    for (int i = 0; i < m; i++) {
      sum += matrix[i][j];
    }
    cout << "sum of elements in column " << j << ": " << sum << endl;
  }
}

int main() {
  int matrix[4][6] = {
      {1, 2, 3, 4, 5, 6},
      {7, 8, 9, 10, 11, 12},
      {13, 14, 15, 16, 17, 18},
      {19, 20, 21, 22, 23, 24}
  };

  sumOfElementsInEachColumn(matrix);

  return 0;
}

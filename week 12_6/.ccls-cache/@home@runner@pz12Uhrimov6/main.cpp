#include <iostream>

using namespace std;

const int m = 4;
const int n = 7;

void findMaxElement(int matrix[m][n]) {
  int minElement = matrix[0][0];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] < minElement) {
        minElement = matrix[i][j];
      }
    }
  }

  cout << "Min element: " << minElement << endl;
}

int main() {
  int matrix[4][7] = {
      {1, 2, 3, 4, 5, 6, 7},
      {8, 9, 10, 11, 12, 13, 14},
      {15, 16, 17, 18, 19, 20, 21},
      {22, 23, 24, 25, 26, 27, 28}
  };
  findMaxElement(matrix);

  return 0;
}
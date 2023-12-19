#include <iostream>

using namespace std;

const int m = 3;
const int n = 4;

void findMaxElement(int matrix[m][n]) {
  int maxElement = matrix[0][0];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] > maxElement) {
        maxElement = matrix[i][j];
      }
    }
  }

  cout << "Max element: " << maxElement << endl;
}

int main() {
  int matrix[3][4] = {{1, 2, 3, 51}, {5, 6, 7, 22}, {9, 10, 11, 12}};
  findMaxElement(matrix);

  return 0;
}
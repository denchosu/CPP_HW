#include <iostream>
#include <string>

using namespace std;

const int m = 6;
const int n = 4;

void countEvenNumsInRow(int matrix[m][n]) {
    int evenCounter = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                evenCounter++;
            }
        }
    }
    cout << evenCounter;
}

int main() {
    int matrix[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    countEvenNumsInRow(matrix);

    return 0;
}

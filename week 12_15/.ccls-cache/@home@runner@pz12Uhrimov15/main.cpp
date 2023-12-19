#include <iostream>

using namespace std;

const int m = 3;
const int n = 3;

void sumOfDiagonals(int matrix[m][n]) {
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    // Sum along the main diagonal
    for (int i = 0; i < m; i++) {
        mainDiagonalSum += matrix[i][i];
    }

    // Sum along the secondary diagonal
    for (int i = 0; i < m; i++) {
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    cout << "Sum along the main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum along the secondary diagonal: " << secondaryDiagonalSum << endl;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    sumOfDiagonals(matrix);

    return 0;
}

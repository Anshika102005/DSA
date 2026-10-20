#include <iostream>
using namespace std;

void printSumDiagonal(int matrix[][3], int row, int col) {
    int first = 0;
    int second = 0;

    // First diagonal (Primary Diagonal)
    for (int i = 0; i < row; i++) {
        first += matrix[i][i];
    }

    // Second diagonal (Secondary Diagonal)
    for (int i = 0, j = col - 1; j >= 0; i++, j--) {
        second += matrix[i][j];
    }

    cout << "Sum of Primary Diagonal: " << first << endl;
    cout << "Sum of Secondary Diagonal: " << second << endl;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Correct function call
    printSumDiagonal(matrix, 3, 3);

    return 0;
}




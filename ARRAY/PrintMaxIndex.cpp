#include<iostream>
#include<climits>
using namespace std;

void printcol(int arr[][4], int row, int col) {
    // Column-wise printing
    for (int j = 0; j < col; j++) {
        for (int i = 0; i < row; i++) {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
}

void printrowmax(int arr[][4], int row, int col) {
    // Finding row index with maximum sum
    int index = -1, sum = INT_MIN;

    for (int i = 0; i < row; i++) {
        int total = 0;
        for (int j = 0; j < col; j++) {
            total += arr[i][j];
        }
        if (total > sum) {
            sum = total;
            index = i;
        }
    }

    cout << "Row with max sum: " << index << endl;
}

int main() {
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    printrowmax(arr, 3, 4);

    return 0;
}

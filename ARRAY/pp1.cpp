#include <iostream>
using namespace std;

const int SIZE = 8;
char board[SIZE][SIZE] = {
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'.', '.', '.', '.', '.', '.', '.', '.'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

// Function to display the chessboard
void displayBoard() {
    cout << "  a b c d e f g h" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << 8 - i << " ";
        for (int j = 0; j < SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << " " << 8 - i << endl;
    }
    cout << "  a b c d e f g h" << endl;
}

// Function to move a piece (basic)
bool movePiece(int startX, int startY, int endX, int endY) {
    if (startX < 0 || startX >= SIZE || startY < 0 || startY >= SIZE ||
        endX < 0 || endX >= SIZE || endY < 0 || endY >= SIZE) {
        cout << "Invalid move! Out of board limits." << endl;
        return false;
    }

    if (board[startX][startY] == '.') {
        cout << "Invalid move! No piece at selected position." << endl;
        return false;
    }

    // Move the piece
    board[endX][endY] = board[startX][startY];
    board[startX][startY] = '.';
    return true;
}

int main() {
    int startX, startY, endX, endY;
    char startCol, endCol;
    int turn = 0; // 0 for White, 1 for Black

    cout << "Welcome to C++ Chess Game!" << endl;
    while (true) {
        displayBoard();
        cout << ((turn % 2 == 0) ? "White's turn" : "Black's turn") << endl;

        cout << "Enter move (e.g., e2 e4): ";
        cin >> startCol >> startX >> endCol >> endX;

        startY = startCol - 'a';
        startX = 8 - startX;
        endY = endCol - 'a';
        endX = 8 - endX;

        if (movePiece(startX, startY, endX, endY)) {
            turn++;
        }
    }
    return 0;
}

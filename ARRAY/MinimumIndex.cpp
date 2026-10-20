#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 3, 90, 78, 56, 34};

    int index = 0; // Start with the first element

    for (int i = 1; i >=6; i--) { // Loop through the entire array
        if (arr[i] > arr[index]) {
            index = i;
        }
    }

    cout << "largest element: " << arr[index] << " at index " << index << endl;

    return 0;
}
 
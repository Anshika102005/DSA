#include <iostream>
#include <vector>
using namespace std;

// Function to sort array by moving zeros to the end
// without replacing the actual number values
void sortWithZeros(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) return;
    
    // Two-pointer approach
    int nonZeroIndex = 0;  // Points to the next position for non-zero element
    
    // First pass: Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            // Swap current element with the position where non-zero should be
            if (i != nonZeroIndex) {
                swap(arr[i], arr[nonZeroIndex]);
            }
            nonZeroIndex++;
        }
    }
    
    // All zeros are now at the end, maintaining relative order of non-zero elements
}

// Alternative approach using extra space (if you want to preserve original array)
vector<int> sortWithZerosExtraSpace(const vector<int>& arr) {
    vector<int> result;
    vector<int> zeros;
    
    // Separate non-zero and zero elements
    for (int num : arr) {
        if (num != 0) {
            result.push_back(num);
        } else {
            zeros.push_back(num);
        }
    }
    
    // Append zeros at the end
    result.insert(result.end(), zeros.begin(), zeros.end());
    
    return result;
}

// Function to print array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    // Test cases
    vector<int> arr1 = {0, 1, 0, 3, 12};
    vector<int> arr2 = {1, 2, 0, 0, 0, 3, 6};
    vector<int> arr3 = {0, 0, 0, 1, 2, 3};
    vector<int> arr4 = {1, 2, 3, 4, 5};
    
    cout << "=== In-place Sorting (Two-pointer approach) ===" << endl;
    
    cout << "Original array 1: ";
    printArray(arr1);
    sortWithZeros(arr1);
    cout << "After sorting:    ";
    printArray(arr1);
    cout << endl;
    
    cout << "Original array 2: ";
    printArray(arr2);
    sortWithZeros(arr2);
    cout << "After sorting:    ";
    printArray(arr2);
    cout << endl;
    
    cout << "Original array 3: ";
    printArray(arr3);
    sortWithZeros(arr3);
    cout << "After sorting:    ";
    printArray(arr3);
    cout << endl;
    
    cout << "Original array 4: ";
    printArray(arr4);
    sortWithZeros(arr4);
    cout << "After sorting:    ";
    printArray(arr4);
    cout << endl;
    
    cout << "=== Extra Space Approach ===" << endl;
    
    vector<int> testArr = {0, 1, 0, 3, 12};
    cout << "Original array:   ";
    printArray(testArr);
    
    vector<int> sortedArr = sortWithZerosExtraSpace(testArr);
    cout << "After sorting:    ";
    printArray(sortedArr);
    cout << "Original preserved: ";
    printArray(testArr);
    
    return 0;
} 
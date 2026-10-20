#include<iostream>
using namespace std;
    // Recursive binary search for descending order array
int BinarySearch(int arr[], int start, int end, int target) {
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target)
    return BinarySearch(arr, start, mid - 1, target);  // Search left half
    else
    return BinarySearch(arr, mid + 1, end, target);    // Search right half
}

int BinarySearch(int arr[], int N, int K) {
    return BinarySearch(arr, 0, N - 1, K);
}
int main(){
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // Descending order array
	int target = 7;
	int N = sizeof(arr) / sizeof(arr[0]);
	int result = BinarySearch(arr, N, target);
	cout<<"Index:"<<result <<endl;
	return 0;
}


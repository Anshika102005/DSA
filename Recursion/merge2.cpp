#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, index = 0;

    while(left <= mid && right <= end)
    {
        if(arr[left] >= arr[right]){
			temp[index++] = arr[left++];
			index ++, left++;
	}
        else{
            temp[index++] = arr[right++];
		}
    }

    // Copy remaining elements of left half
    while(left <= mid)
        temp[index++] = arr[left++];

    // Copy remaining elements of right half
    while(right <= end)
        temp[index++] = arr[right++];

    // Copy sorted temp array back to original array
    for(int i = 0; i < temp.size(); i++)
        arr[start + i] = temp[i];
}

void mergesort(int arr[], int start, int end)
{
    if(start >= end)
        return;
    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {6,3,1,2,8,9,10,7,3,10};
    int N = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, N - 1);
    for(int i = 0; i < N; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
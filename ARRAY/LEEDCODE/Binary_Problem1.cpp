#include<iostream>
using namespace std;

int BinarySearch(int arr[], int num, int target){
    int start=0, end = num-1, last=-1, mid;

    while(start<=end){
        mid = start+(end-start)/2;
        
        if(arr[mid] == target){
            last = mid;
            end = mid-1;

        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid - 1;
        }

    }
    return last;
}

int main(){
    int arr[] = {2,3,3,3,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int index = BinarySearch(arr, n, target);

    if(index!=-1){
        cout << "First occurrence of " << target << " is at index " << index << endl;
    }
    else{
        cout <<"Element not found!" << endl;
    }
    return 0;
}

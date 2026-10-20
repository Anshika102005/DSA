#include<iostream>
#include<vector>
using namespace std;

int SearchInRotatedArray( vector<int> & arr, int target){
    int start=0, end=arr.size()-1, mid;

    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == target){
        return mid;
        }
        //left side sorted
        else if (arr[mid]>=arr[0])
        {
            if(arr[start]<=target && target < arr[mid])
            end = mid-1;
            else
            start = mid+1;
        }
        //Right side sorted
        else
        {
            if(arr[mid]<target && arr[end]>=target){
            start = mid+1;
            }
            else{
            end = mid-1;
        }
    }
    return -1;
    }
}
int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int target = 1;
    int result = SearchInRotatedArray(arr, target);
    cout << "The target " << target << " is at index: " << result << endl;

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

    int peakIndexInMountainArray (vector<int>&arr){
        int start = 0, end = arr.size()-1, mid;

        while(start<=end)
        {
            mid = end+(start-end)/2;

            //peak elements
            if(arr[mid]>arr[mid-1] && arr[mid] > arr[mid+1])
            return mid;
            //Right side move
            else if(arr[mid] > arr[mid-1]) {
                start = mid+1;
            }
        }
        return -1;
    }

int main(){
    vector<int>arr = {5,6,7,8,9,10,2,3};

    int peakIndex = peakIndexInMountainArray(arr);

    cout <<"The peak Index in Mountain Array: "<< peakIndex << endl;

    return 0;

    
}
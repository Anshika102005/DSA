#include<iostream>
#include<vector>
using namespace std;

int RotatedArray(vector<int>&arr){
    int start = 0, end = arr.size()-1, ans = arr[0];

    while(start<=end)
    {
        int mid = start+(end-start)/2;

        //Leftside Sorted array
        if(arr[mid]>=arr[0])
        start = mid+1;
        //Right Side Sorted Array
        else
        {
            ans = arr[mid];
            end = mid-1;
        }
    }
    return ans;

}
int main(){

    vector<int> arr = {4,6,8,10,1,2};

    cout <<"Minimum element in rotated sorted array: "<< RotatedArray(arr)<<endl;

    return 0;

}

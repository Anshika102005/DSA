#include <iostream>
#include <vector>

using namespace std;

int findKthPositive(vector<int> & arr, int k){
    int start=0, end=arr.size()-1, mid, ans= arr.size();
    while(start<=end)
    {
        mid = start + (end-start)/2;
        
        if(arr[mid]-mid-1>k)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start = mid+1;

        }
    }
    return ans+k;
}

int main() {
    vector<int> arr = {2,3,4,7,11,12};
    int k = 5;

    cout << "The " << k << "th missing number is: " << findKthPositive(arr, k) << endl;
    return 0;
}

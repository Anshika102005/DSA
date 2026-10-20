#include<iostream>
#include<climits>

using namespace std;

int main(){

    int arr[] = {2,4,6,7,9,3,79,99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(max<arr[i])
        max = arr[i];

    }
    for(int i=0; i<n; i++){
        if(min>arr[i])
        min = arr[i];
    }


    cout << max << " "<< endl;
    cout << min << " "<< endl;

}
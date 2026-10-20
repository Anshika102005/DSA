#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[] = {2,3,4,6,55,77,88};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    cout << "The sum of these array is : "<< sum ;
}
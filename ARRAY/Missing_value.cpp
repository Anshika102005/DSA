#include<iostream>
using namespace std;


int findMissingvalue (int arr[], int n){
    int total = (n*(n+1)/2);
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += arr[i];
    }
    return total - sum;


}


int main()
{
    int arr[] = {1,2,4,5,6,7};
    int n = 6;

    cout <<"Missing number: "<< findMissingvalue(arr , n) << endl;

    return 0;
}
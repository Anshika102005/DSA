#include<iostream>
using namespace std;

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element in array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=3; i>=0;i--)
    {
        bool swapped = 0;
        for(int j=n-2; j>=0; j--)
        {
            if(arr[j]>arr[j+1])
            {
                swapped = 1;
                swap(arr[j] , arr[j+1]);
            }

        }

        if(swapped==0)
        break;

    }

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}
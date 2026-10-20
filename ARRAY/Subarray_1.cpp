#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout <<"Enter the size of the element: ";
    cin>>n;

    vector<int>arr(n);
    cout <<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int>suffix(n);
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=max(arr[i],suffix[i+1]);  
    }
    //Maximum output suffix[0] = 8 
    cout <<"Maximum suffix sum is: "<<suffix[0]<<endl;
    for(int i=0;i<n;i++){
        cout << suffix[i] <<" ";  
    }
    cout <<endl;

    return 0;
}
#include<iostream>
#include <climits> 
using namespace std;

int main()
{
    int arr[5] = {2,3,5,8,4};
    int ans = INT_MAX;
    //MINIMUM VALUE
    for(int i=0;i<5; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }

    cout << ans<<endl;

    ans = INT_MIN;

    //MAXIMUM VALUE 
    for(int i=0; i<5; i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }

    cout << ans<<endl;

    
    return 0;

    
}
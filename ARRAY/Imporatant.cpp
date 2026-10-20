#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6] = {5,8,6, 7, 2, 5};
    int max = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }

    int secondmax = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>secondmax && arr[i] != max)
        secondmax = arr[i];

    }

    cout <<"Maximum element is: "<< max << endl;
    cout <<"Second Maximum element is: " << secondmax << endl;
    return 0;

}

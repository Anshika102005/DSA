#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[7] = {2,9,7,0,4,7,8};
    int max = INT_MIN;
    int Secondmax = INT_MIN;
    for (int  i=0; i<7; i++){
        if(arr[i]>max);
        max = arr[i];
    }
    for(int i=0; i<7; i++){
        if(Secondmax<arr[i] && arr[i] != max)
        Secondmax = arr[i];
    }

    cout << "maximum elements would be: " << max << endl;
    cout << "second maximum elements would be: "<< Secondmax << endl;

    return 0;
}

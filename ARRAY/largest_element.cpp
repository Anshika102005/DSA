#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {10,3,90,70,60,80};
    int index = 0;
    for(int i=1; i<6; i++){
        if(arr[i]<arr[index]){
            index = 1;
        }
    }
    cout << "Smallest element: " << arr[index] << " at index " << index << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int index = -1;
    int search;

    cout <<"Enter the element to search : ";
    cin >> search;

    for (int i=0; i<5; i++){
        if(arr[i]==search){
        index = i;
        break;
        }
    }

    if (index !=-1){
        cout <<"Elements found at index " <<index << endl;
    }
    else{
        cout << "Elements not found at that"  << index << endl;
    }

    return  0 ;
}
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int * ptr = arr;
    
    
    //print the address of first elements 
    // cout <<arr<<endl;
    // cout << &arr[0] <<endl;
    // cout<<arr+0<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;
    //these are the different methods to print the address 
    

    //print the address of second element or 1 index
    // cout<<arr+1<<endl;

    // print the value of 0 index
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+0)<<endl;
    // cout<<*ptr<<endl;

    // saare address ko print kar do 
    // for(int i=0;i<5;i++)
    // cout<<arr+i<<endl;
    // for(int i=0;i<5;i++)
    // cout<<*(arr+i)<<endl;

    //print all the value
    for(int i=0;i<5;i++)
    cout<<ptr[i]<<" ";

    //Print all the arrays
    for(int i=0;i<5;i++)
    cout<<ptr+i<<endl;

    //Arithmetic opeartions ptr; ptr--, ptr = ptr+1
    // for(int i=0; i<5; i++)
    // {
        // cout <<*ptr<<" ";
        // ptr++;
    // } 
    // cout<<endl;

    // for(int i=5; i>=0; i--)
    // {
        // cout<<*ptr<<" ";
        // ptr --;
    // }

    ptr = ptr+3;
    cout<<*ptr<<endl;


    ptr = ptr-2;
    cout<<*ptr<<endl;


}
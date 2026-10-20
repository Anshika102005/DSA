#include<iostream>
using namespace std;

int main()
{
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(21);
    arr.push_back(122);
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
}
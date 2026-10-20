#include<iostream>
#include<vector>

using namespace std;
// int main(){
    //create vector, declar
    // vector<int>v;
    // vector<int>v1(5,1);
    //size and capacity
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout<<"size of v: "<<v.size()<<endl;
    // cout<<"capacity of v: "<<v.capacity()<<endl;
    //update value
    // v[1] = 5;
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"size of v1: "<<v1.size()<<endl;
    // cout<<"capacity of v1: "<<v1.capacity()<<endl;

    //delete value from vector
// int main(){
//     vector<int>vnew;
//     vnew.push_back(4);
//     vnew.push_back(41);
//     vnew.push_back(14);
//     vnew.push_back(42);
//     vnew.push_back(84);
//     vnew.pop_back();
//     cout<<"size of vnew:"<<vnew.size()<<endl;
//      cout<<"size of vnew: "<<vnew.capacity()<<endl;

// vnew.erase(vnew.begin()+1);
// cout<<"size of vnew:"<<vnew.size()<<endl;
// cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
//  for(int i=0;i<vnew.size();i++)
//  cout << vnew[i]<<" ";
//  vnew.insert(vnew.begin()+1,50);
//  cout<<endl;
//  for(int i=0;i<vnew.size();i++)
//  cout<<vnew[i]<<" ";

//  //change value at index1
//  vnew[1]=37;
//  for(int i=0;i<vnew.size();i++)
//  cout<<vnew[i]<< " ";
//  cout<<endl;
//  vnew.clear();
//  cout<<"size of vnew:"<<vnew.size()<<endl;
// cout<<"capacity of vnew: "<<vnew.capacity()<<endl;
// vector<int>arr;
// arr.push_back(2);
// arr.push_back(4);
// arr.push_back(21);
// arr.push_back(122);
// cout<<arr[0]<<endl;
// cout<<arr.front()<<endl;
// cout<<arr[arr.size()-1]<<endl;
// cout<<arr.back()<<endl;

// vector<int>a;
// a = arr;
// cout<<a.size();
// cout<<endl;
// for(auto it = arr.begin(); it! = arr.end(); i++)
// {
//     cout<<*it<<" ";
// }
// cout<<endl;
// for(auto i: arr)
// cout<<i<<" ";




// }
int main()
{
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(234);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);

    //sort in increasing order
    //sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    //sort in decreasing order
    //sort(ans.begin(),ans.end(),greater<int>());
    //or sort(ans.rbegin(),ans.rend());
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

    //search in binary search
    cout<<binary_search(ans.begin(), ans.end(), 54) << endl;
    //output if yes tha 1 and if no than print 0
    //Index identity
    cout<<find(ans.begin(),ans.end(),54)-ans.begin()<<endl;


}
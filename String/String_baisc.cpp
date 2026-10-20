#include<iostream>
using namespace std;
int main()
{
    string s = "Anshika";
    //Reversse String
    int start = 0, end = s.size()-1;
    while(start < end)
    {
        swap (s[start], s[end]);
        start ++, end--;

    }

    cout <<s;

    //how to calculate Size

    int size = 0;
    while(s[size]!='\0')
    {
        size++;
    }
    cout<<endl;
    cout<<size<<" ";
    cout<<endl;

    string s2 = "naman";
    start =0 , end = s2.size()-1;
    while(start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"Not a Palindrome";
            return 0;
        }
        start ++, end--;
    }

    cout <<"It is a Palindeome: ";

}
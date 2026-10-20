#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int mul=1, ans=0, rem;

    while (num>0)
    {
        //remainder
        rem = num%10;
        //numko divide kar do
        num = num/10;
        //ans 
        ans = mul*rem+ans;
        //mul
        mul*=2;
    }

    cout <<ans<<endl;
}
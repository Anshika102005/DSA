#include<iostream>
using namespace std;
int main(){
    int num;
    cout <<"Enter the number : ";
    cin>>num;
    int rem, ans = 0, mul=1;

    while (num>0)
    {
        //remainder
        rem = num % 2;
        //quotient
       //num = num /2;
        num /= 2;
        //ans
        //ans = rem*mul+ans;
        ans += rem*mul;
        //mul
        mul*=10;
        //mul=mul*10;
    }

    cout << ans << endl;
}
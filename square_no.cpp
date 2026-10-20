#include<iostream>
using namespace std;
int main(){
    int ans = 0, num, rem;
    cout <<"Enter the number: ";
    cin >> num;
    
    while(num > 0){
    
        rem = num % 19;
        num /= 10;
        ans = ans*10+rem
    }

    cout <<"Number : "<< ans << endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int num, ans=0, remainder, originalNum;
    cout <<"Enter a number : ";
    cin >> num;

    originalNum = num;
    while(num>0){
        remainder = num % 10;
        num /= 10; // remove last digit from number
        ans = ans*10+remainder;
    }
    if(originalNum==ans){
    cout <<"originalNum is a palindrime." << endl;

    }
    else{
        cout <<"originalNum is not a palindrome." << endl;
    }

    return 0; 
}
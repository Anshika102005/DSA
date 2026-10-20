#include <iostream>
using namespace std;
int main(){
    int number;
    cout <<"Enter your number : ";
    cin >> number;
    if(number%2 == 0){
        cout <<"Number is divisible by two so here number is even\n : ";
    }else{
        cout << "Number is not divisible by two so, here number is odd\n : ";
    }
    return 0;
}
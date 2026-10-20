#include<iostream>
using namespace std;
int main(){
    int num = 121
    int ans = 0, rem, multiplies = 1;

    while(num){
    rem = num / 2;
    rem = rem ^ 1;
    num = num / 2;
    ans = ans + rem + multiplies;
    multiplies = multiplies * 2;
    }


}
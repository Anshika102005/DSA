#include <iostream>
using namespace std;
int main(){
    int n = 5;
    if(n>=0){
        cout<<"n is positive number\n";
    }else{
        cout<<"n is negative number\n";
    }

    int age;
    cout <<"Enter your age : ";
    cin >> age;
    if (age>=18){
        cout <<"You are adult you can vote\n ";
    }else{
        cout <<"You are chidren you can't vote\n ";
    }
    return 0;


}
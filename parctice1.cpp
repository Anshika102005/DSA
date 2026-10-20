#include <iostream>
using namespace std;
int main(){
    cout << "Number from 1 to 10: "<< endl;
    int i = 1;
    while (i<=10){
        cout << i << " ";
        i++;
    }
    cout << endl;
    cout << " Even Number from 1 to 10:  "<< endl;
     i = 2;
    while(i<=10){
        cout << i << " ";
        i+=2;
    }
    cout << endl;

    cout <<" Odd Number from 1 to 10: "<< endl;
    i = 1;
    while(i<=10){
        cout << i << " ";
        i+=2;
    }
    cout << endl;
    cout << "Numbers from 10 to 1 : "<< endl;
    i = 10;
    while (i>=1){
        cout << i << " ";
        i--;
    }
    cout << endl;
    return 0;

}

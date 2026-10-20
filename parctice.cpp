#include <iostream>
using namespace std;
int main(){
    cout <<"Numbers from 1 to 10: "<< endl;
    for (int i = 1; i<=10; i++){
        cout << i << " ";
    }
    cout << endl;

    cout << "Even Number from 1 to 10: "<< endl;
    for (int i = 2; i<=10; i++){
        cout << i << " ";
    }
    cout << endl;

    cout << "Odd Number from 1 to 10 : "<< endl;
    for(int i = 1; i<=10; i+=2){
        cout << i << " ";

    }
    cout << endl;
    return 0;

}


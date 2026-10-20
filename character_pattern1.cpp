#include<iostream>
using namespace std;
int main(){
    int n = 4;
    char ch = 'A';
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++){
            cout << ch  << " ";
            ch ++;
        }
        cout << endl;
    }
    //cout << "after pattern: "<< num << endl;
    return 0;
}
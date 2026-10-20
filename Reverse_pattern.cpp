#include <iostream>
using namespace std;
int main(){
    int n = 4;
    char ch ='A';
    for (int i = 0; i<n; i++){
        for (int j = i+1; j>0; j--){
            cout << ch << " ";
        }
        cout << endl;
    }

    

    return 0;
}
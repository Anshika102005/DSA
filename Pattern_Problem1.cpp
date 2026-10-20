#include <iostream>
using namespace  std;
int main(){
    int n = 4;
    for (int i=1; i<=n; i++){//Outer loop - number of lines.

    
       for(int j=1; j<=n; j++){
        cout << j << " ";

       }
       cout << endl;

    }
    int m = 4;

    for(int i = 1; i<=m; i++){
        for (int j = 1; j<=m; j++){
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
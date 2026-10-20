#include <iostream>
using namespace std;
int main(){
    int n = 500;
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
        if (i == 5){
            break;
        }
        //sum+1= i
    }
    cout <<"Sum = "<< sum << endl;


    return 0;
}
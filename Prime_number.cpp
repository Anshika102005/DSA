#include <iostream>
using namespace std;
int main(){
    int n = 66;
    bool isPrime = true;

    for(int i = 2; i<=n-1; i++){
        if(n % i == 0){//non-prime
        isPrime = false;
        break;
        }
    }
    if (isPrime == true){
        cout << "Prime Number\n";
    }else{
        cout << "Non-Prime\n";
    }
    return 0;
}
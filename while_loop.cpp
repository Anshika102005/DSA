#include <iostream>
using namespace std;
int main(){
    int i =1;
    int n = 50;
    int sum = 0;
    while(i<= n){
        cout << "sum =" << sum << endl;
        sum += i ;
        i++;
    }
    return 0;

}
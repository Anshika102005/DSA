#include <iostream>
using namespace std;
//function definition
int addNumbers(int a, int b){
    return a+b;
}
int main(){
    int num1, num2;

    cout <<"Enter the first numbers: ";
    cin >> num1;

    cout << "Enter the second numbers: ";
    cin >> num2;

    int sum = addNumbers (num1 , num2);

    cout << "The sum is : "<< sum << endl;

    return 0;
}
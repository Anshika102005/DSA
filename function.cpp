#include <iostream>
using namespace std;
//function definition
int printHello(){
    cout << "Hello\n";
    return 3;
}
int main(){
    //function call / invoke
    int value = printHello();
    cout << "value = " << value << endl;
    //cout << printHello() << endl;

//minimum of 2 number
int minOfTwo (int a, int b){
    if ( a < b ){
        return a;
    } else {
        return b;
    }


}
int main(){
    cout << "min = " << minOfTwo (5,5) << endl; //arguments

    
    return 0; 
}
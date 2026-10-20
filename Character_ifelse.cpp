#include <iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter char : ";
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout <<"Uppercase\n";

    }else {
        cout <<"Lowercase\n";
    }
    return 0;
}
//This is the best example of implicit conversion because here we are comparing the value in integer form and converting it to character
//we are do doing theses process complier do these 
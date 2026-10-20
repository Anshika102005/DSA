#include <iostream>
using namespace std;
int main(){
    int marks;
    cout <<"Enter students marks: \n ";
    cin >> marks;

    if(marks>=90){
        cout <<" grade A\n";
    } else if(marks >= 80 && marks <90){
        cout <<" grade B\n";
    }else{
        cout << "grade C\n";
    }
    return 0; 
}
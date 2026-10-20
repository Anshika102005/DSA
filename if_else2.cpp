#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "lowercase\n";

    }else {
        cout << "Uppercase\n";

    }
    return 0;
}
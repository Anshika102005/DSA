#include <iostream>
using namespace std;
int main(){
    int n = 4;
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout << ch;
            ch++;

        }
        cout << endl;
    }
    return 0;
}
//     #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;
//     char ch = 'A'; // Start with 'A'
    
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << ch; // Print the current character
//             ch++;       // Increment to the next character
//         }
//         cout << endl; // Move to the next line after each row
//     }
    
//     return 0;
// }

    
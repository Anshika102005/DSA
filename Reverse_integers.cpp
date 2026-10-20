#include <iostream>
using namespace std;

int main() {
    int num = 632;
    int ans = 0, rem;
    
    while (num != 0) {
        rem = num % 10;  // Extract last digit
        num /= 10;       // Remove last digit
        ans = ans * 10 + rem; // Build reversed number
    }

    cout << "Reversed Number: " << ans << endl;
    return 0;
}

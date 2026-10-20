#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int answer = 0, pow = 1;

    if (decNum == 0) {
        return 0;  // Handle the edge case for 0
    }

    while (decNum > 0) {
        int rem = decNum % 2;  // Get remainder
        decNum /= 2;           // Divide by 2
        answer += (rem * pow); // Build binary number
        pow *= 10;             // Update position
    }

    return answer;  // Return the binary representation
}

int main() {
    int decNumber = 42; // Test value

    for(int i=1; i<=10; i++){
        cout << decToBinary(i) << endl;
    }
    cout << "Binary of " << decNumber << " is: " << decToBinary(decNumber) << endl;
    return 0;
}

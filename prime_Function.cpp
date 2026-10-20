#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1){
    return false; // 0 and 1 are not prime
    } 
    for (int i = 2; i<=num-1; i++) { // Check up to the square root of num
        if (num % i == 0){
        return false; // If divisible, not prime
    } else{
    return true;
    } // If no divisors found, it's prime
}

int main(){
    int number;

    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is prime
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}

}

#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient
long long binomialCoefficient(int n, int r) {
    if (r > n) return 0; // If r > n, result is 0
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    cout << "Enter n and r: ";
    cin >> n >> r;

    // Calculate binomial coefficient
    long long result = binomialCoefficient(n, r);

    // Output the result
    cout << "C(" << n << ", " << r << ") = " << result << endl;

    return 0;
}

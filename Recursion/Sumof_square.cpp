#include<iostream>
using namespace std;
// Function to calculate the sum of squares of first n natural numbers
int sumOfsquare(int n){
	//Base case: if n is 0, return 0
	if(n == 0)
	return 0;
	if(n == 1)
	return 1;
	// Recursive case: return n^2 + sum of squares of first (n-1) natural numbers
	return n * n + sumOfsquare(n - 1);
}

int main(){
	// Input: n
	int n;
	cout << "Enter a number: ";
	cin >> n;
	// Check if n is negative
	if(n < 0){
		cout << "Sum of squares of negative numbers is not defined." << endl;
		return 0;
	}
	// Output: sum of squares of first n natural numbers
	cout << "Sum of squares of first " << n << " natural numbers is: " << sumOfsquare(n) << endl;
	return 0;
}
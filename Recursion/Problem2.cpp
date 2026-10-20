#include<iostream>
using namespace std;

void printReverse(int n)
{
	if( n == 1)//Base case
	{
		cout<< 1 <<endl;
		return ; 
	}
	cout << n << endl;
	printReverse(n-1);
}

int main()
{
	//Print n to 1
	int n = 5;
	// for(int i=n; i>0; i--)
	// cout<< i << "  "<<endl;
	printReverse(n);
//How to solve this problem using recursion?

}

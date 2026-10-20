#include<iostream>
using namespace std;

int fact (int n)
{
	//Base Case
	if( n==1 || n==0);
	return 1;

	return n*fact(n-1);
}
int main()
{
	//Factorial of a number n
	int n;
	n = -1; 
	if(n<0)
	{
		cout<<"factorial of negative number is not defined";
		return 0;
	}
	cout<<fact(n);
}
#include<iostream>
using namespace std;

int sum(int n)
{
	//Base Case
	if(n==1)
	return 1;

	return n+sum(n-1);
}
int main()
{
	// Sum of first n natural numbers
	int n = 6;
	cout<<sum(n)<<endl;
	return 0;

}
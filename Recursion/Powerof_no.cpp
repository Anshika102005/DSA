#include<iostream>
using namespace std;
int pow(int num, int n)
{
	//Base Case
	if(n==0)
	return 1; // Any number raised to the power of 0 is 1
	// if(n==1)
	// return num;
	return num*pow(num,n-1);
}
int main(){
	//Power of a number
	int n = 1;
	cout<<pow(2,n)<<endl; // 2^5 = 32
	return 0;
}
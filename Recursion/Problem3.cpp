#include<iostream>
using namespace std;

void print(int n)
{
	//Base Case
	if(n==2)
	{
		cout<<2<<endl;
		return;
	}
	cout<<n<<endl;
	print(n-2);

}
int main()
{
	//Print n to 1
	// print even number n to 1
	int n = 10;
	print(n);

}
#include<iostream>
using namespace std;

void fun3(int n)
{
	//Base Case
	if(n==0)
	{
		cout<<"Happy Brithday\n";
		return;
	}
	cout<<n<<" days left for brithday\n";
	fun3(n-1);
}
int main()
{
	int n=3;

	// Iterative approach
	// for(int i=n; i>0; i--)
	// {
		// cout<<i<<" days left for brithday\n";
	// }
	// cout<<"Happy Brithday\n";

	// fun3(3);
	// fun2(2);
	// fun1(1);
	// fun0(0);

	fun3(3);
}

#include<iostream>
using namespace std;
void swapping(int *p1, int *p2) // pass by value

{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<&p2<<endl;
	cout<<&p1<<endl;
}
int main()
{
	//pass by reference
	int num = 10;
	int &temp = num;//num and temp are same
	cout<<temp<<endl;
	temp++;
	cout<<num;
	//print address
	cout<<num<<endl;
	cout<<&temp<<endl;
	cout<<&num;


	// int first = 10, second = 20;
	// cout<<&first<<endl;
	// cout<<&second<<endl;
	// swapping(&first, &second);
	// cout<<first<<" "<<second;
}

#include<iostream>
using namespace std;

// void printeven(int num , int N)
// {
	//Base Case
	// if(num==N)
	// {
		// cout<<num<<endl;
		// return;
	// }
	// cout<<num<<endl;
	// printeven(num+2 , N);
// }
// int main()
// {
	//print even number from 1 to N;
	// int N;
	// cin>>N;
	// if(N%2==1)
	// N--; // if number is odd makes it even 
// 
	// printeven(2, N);
// 
// }																									
void printeven(int N)
{
	if(N==2)
	{
		cout<<2<<" ";
		return;
	}
	printeven(N-2); //print the previous number first
	cout<<N<<" ";

}
int main()  
{
	int N;
	cin>>N;
	if(N%2==1)
	N--;
}
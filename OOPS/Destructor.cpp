#include<iostream>
using namespace std;

class Customer
{
	string name;
	int *data;

	public:
	//Constructor
	Customer()
	{
		name = "Shubhi";
		data = new int;
		*data = 10;
		cout<<"constructor is called\n";
	}
	//Destructor
	~Customer()
	{
		delete data; // it relase the memory 
		cout<<"Destructor is called\n";
	}
};

int main()
{
	Customer A1;
}
#include<iostream>
using namespace std;

class Customer
{
	string name;
	int * data;

	public:
	//Default Constructor
	Customer()
	{
		name = "4";
		cout<<"Constructor is "<<name<<endl;

	}
	Customer(string name)
	{
		this -> name = name;
		cout<<"Constructor is "<<name<<endl;
	}
	~Customer()
	{
		cout<<"Destructor is "<<name<<endl;
		//Reverse order 3 2  1 
	}
};

int main()
{
	Customer A1("1"), A2("2"), A3("3"); // line wise output 1 2 3 in constructor 
	Customer *A4 = new Customer; // but it was not releasd 
	delete A4; // now its delete 


}

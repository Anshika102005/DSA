//They are attributes of classes or class member

#include<iostream>
using namespace std;

class Customer
{
	string name;
	int account_number, balance;
	static int total_customer;
	static int total_balance; // static member variable

	public:
	//static member function
	//static int total_customer;

	Customer(string name, int account_number, int balance)
	{
		this -> name = name;
		this -> account_number = account_number;
		this -> balance = balance; 
		total_customer ++;
		total_balance += balance;

	}
	static void acceStatic()
	{
		cout<<"Total number of customer "<<total_customer<<endl;
		cout<<"Total number of balance" <<total_balance<<endl;
	}
	void deposit(int amount)
	{

		if(amount>0)
		{
			balance = amount;
			total_balance += amount;
		}
	}
	void withdraw(int amount)
	{
		if(amount<=balance && amount>0)
		{
			balance -= amount;
			total_balance -= amount;
		}

	}
	void display()
	{
		cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<" "<<total_balance<<endl;

	}
	void display_total()
	{
		cout<<total_customer<<endl;
	}

};

int Customer::total_customer = 0;
int Customer::total_balance = 0; // Initialize static member variable

int main()
{
	//int total_customer = 0 increment not possible 
	Customer A1("Yashika", 1567, 10000);
	Customer A2("Abhishek", 98752, 18720000);
	// A1.display();
	// A2.display();
	A2.display_total(); // 2 
	Customer A3("Mohan",558,150000);
	// A3.display(); 
	A2.display_total(); // 3 
	//Without an object, we can access the static member function 
	Customer::acceStatic(); // 3
	A1.display_total(); // 3
	A1.deposit(800);
	Customer::acceStatic();
	A2.withdraw(1000);
	Customer::acceStatic();
}


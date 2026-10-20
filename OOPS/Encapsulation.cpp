#include<iostream>
using namespace std;

class Customer
{
	string name;
	int account_number, balance, age;
	public:

	Customer(string name, int account_number, int balance, int age)
	{
		this->name = name;
		this->account_number = account_number;
		this->balance = balance;
		this -> age;
	}

	void deposit(int amount)
	{
		if(amount>0){
			balance += amount;
		}
		else
		{
			cout<<"Invalid deposit amount"<<endl;
		}
	}
	void updateage(int age)
	{
		if(age>0 && age<100)
		{
			this->age = age;
		}
		else
		{
			cout<<"Invalid age"<<endl;
		}
	}
	void withdraw(int amount)
	{
		if(amount <= balance && amount > 0)
		{
			balance -= amount;
		}
	}
	void display()
	{
		cout<<name<<" "<<account_number<<" "<<balance<< " "<<age<<endl;
	} 

};
int main()
{
	Customer A1("Rohit", 1, 1000, 6);

	A1.display();
	A1.deposit(-10);
	A1.display();
	A1.updateage(24);
	A1.display();
}
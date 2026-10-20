#include<iostream>
using namespace std;
class Student
{
	public:
	string name;
	int age, roll_number;
	string grade;	
	
};
int main()
{
	Student S1;
	S1.name = "Vanshika";
	S1.age = 10;
	S1.roll_number = 21;
	S1.grade = "A++";

	cout<<S1.age<<" "<<endl;

	Student S2;
	S2.name = "Vaishnavi";
	S2.age = 20;
	S2.roll_number = 22;
	S1.grade = "B++";

	cout<<S2.name<<" ";


}
#include<iostream>
using namespace std;
int main()
{
	char arr[5] = "1234";
	char *ptr = arr;
	cout<<arr<<endl;
	cout<<ptr<<endl;
	//it print the original value
	//for Address 
	cout<<(void*)arr<<endl;
	cout<<(void*)ptr<<endl;
	char name = 'a';
	char *ptr1 = &name;
	cout<<(void*)&name<<endl;
	cout<<(void*)ptr1;

}
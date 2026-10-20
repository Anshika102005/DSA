#include<iostream>
using namespace std;

void lowertoupper(string &str, int index)
{
	if(index==-1)
	return;

	str[index] = 'A' + str[index] - 'a';
	lowertoupper(str, index-1);
}

int main()
{
	//lower case to uppercase
	string str;
	cout<<"Enter  a string: ";
	getline((cin),str);
	lowertoupper(str, str.length()-1);
	cout<<"Uppercase string: "<<str<<endl;
	return 0;
}
#include<iostream>
using namespace std;

void rev(string &str, int start, int end){
	if(start>=end)
	return;

	char c = str[start];
	str[start] = str[end];
	str[end] = c;
	rev(str, start+1, end-1);
}
int main()
{
	//reverse a string using recursion
	string str;
	cout<<"Enter a string: ";
	getline((cin), str);
	rev(str, 0, str.length()-1);
	cout<<"Reversed string: "<<str<<endl;
	return 0;
}
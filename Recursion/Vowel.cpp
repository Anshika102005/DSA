#include<iostream>
using namespace std;
int count(string str, int index)
{
	//Base condition
	if(index== -1)
	return 0;
	//vowel hoga
	if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i'|| str[index] == 'o' || str[index] == 'u')
	return 1+count(str, index-1);
	//vowel nahi hoga
	else
	return count(str, index-1); 
}
int main(){
	// string str = "aeiou";
	// int count = 0;
	// for(int i = 0; i < str.length(); i++){
		// if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			// count++;
		// }
	// }
	// cout << "Number of vowels in the string: " << count << endl;
	// return 0;

	//count vowel
	string str = "rohit";
	cout<<count(str,4)<<endl;

}
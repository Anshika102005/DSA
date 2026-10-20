#include<iostream>
using namespace std;

// void print(int num, int N){
// {
	// if(num == N){
	// cout<<num<<endl;
	// return;
	// }
	// cout<<num<<endl;
	// print(num+1, N);
	// 
// }
// 
// int main(){
	// Print numbner 1 to n;
	// int N;
	// cin >> N;
	// print(1, N);
// }

//Print number 1 to n in reverse order 
void print(int N){
	if(N==1){
		cout<<1<<endl;
		return;
	}
	print(N-1); //print the previous number first 
	cout<<N<<endl;
	//print(N-1); //here this line is added to print the number in reverse order 
}
int main(){
	int N;
	cin>>N;
	print(N);
}
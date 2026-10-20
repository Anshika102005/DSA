#include<iostream>
using namespace std;
int main(){
	//Array create karna hai, jo store karega address
	int n,m;
	cin>>n>>m;
	
	int **ptr = new int *[n];
	
	//created 2d array
	for(int i=0; i<n; i++)
	{
		ptr[i] = new int [m];
	}
	for(int i=0; i<n; i++)
	for(int j=0; j<m; j++)
	cin>>ptr[i][j];

	//print the value
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		cout<<ptr[i][j]<<" ";
		cout<<endl;
	}

	//Release the heap memory
	for(int i=0; i<n; i++)
	delete[] ptr[i];

	delete [] ptr;
	
}
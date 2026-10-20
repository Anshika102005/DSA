#include<iostream>
using namespace std;
int sum(int arr[], int index)
{
	if(index <0)
	return 0;

	return arr[index]+sum(arr,index-1);
}

int main(){
	int arr[]= {3, 4, 5, 6, 7};
	int n = 5; 
	cout<<sum(arr, n - 1)<< endl;
}
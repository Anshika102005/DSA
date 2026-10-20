#include<iostream>
using namespace std;

int minElements(int arr[], int index)
{
	if(index<0)
	return arr[index];
	return min(arr[index], minElements(index - 1, arr ));
}

int main(){
	int arr[] = {3, 4, 1, 2, 8};
	int n = 5;
	cout<<minElements(arr,n-1);
}
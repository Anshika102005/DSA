#include<iostream>
#include<vector>
using namespace std;
// Function to partition the array

int partition(int arr[], int start, int end)
{
	int position = start;
	for(int i=start; i<=end; i++)
	{
		if(arr[i] <= arr[end])
		{
			swap(arr[i], arr[position]);
			position++;
		}
	}
	return position-1; // Return the index of the pivot element
}
void quicksort(int arr[], int start, int end)
{
	if(start >= end) //Base case to stop recursion
	return;

	int pivot = partition(arr, start, end);
	//left side of the pivot
	quicksort(arr, start, pivot-1);
	//right side of the pivot
	quicksort(arr, pivot+1, end);
}




int main(){
	int arr[] = {10,3,4,1,5,6,3,2,11,9};
	quicksort(arr, 0, 9);
	for(int i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
}
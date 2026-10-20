#include<iostream>
using namespace std;

// void printArray(int arr[], int index, int n)
// {
	// if(index==n)
	// return;
	// printArray(arr, index+1,n);
	// cout<<arr[index]<<" ";
	 
	//if printArray i will write first then it will print in reverse order
	//cout<<arr[index]<<" "; //if i write this after printArray then it will print in normal order
	
// }
// int main(){
	// int arr[] = {3,4,8,5,6};
	// printArray(arr,0,5);
	// cout<<endl;
// }
//Without Recursion
//int arr [] = {3,2,5,8,7};
//for(int i=0; i<5; i++)
//print(arr,i);

//In the last indexn n 
void printArray1(int arr[], int index)
{
	if(index == -1)
	return;

	cout<<arr[index]<<" ";
	printArray1(arr,index-1);
	// This will print the array in reverse order
	// if printarray1 is called first, it will print the last element first reverse order
	// if printArray1 is called after cout, it will print in normal order

}
int main1(){
	int arr[] = {3,4,5,6,7};
	printArray1(arr,4);
	cout<<endl;
}

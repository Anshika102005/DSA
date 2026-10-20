#include<iostream>
using namespace std;

bool BinarySearch(int arr[], int start, int end, int X)
{
	//Base Case
	if(start > end)
	return 0;
	if(start == end)
	return arr[start] == X;
	int mid = start + (end-start) / 2;
	if(arr[mid] == X)
	return 1;
	else if(arr[mid]<X)
	return BinarySearch(arr,mid+1,end,X);
	else
	return BinarySearch(arr,start,mid-1,X);

}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int X = 7;
	cout<<BinarySearch(arr, 0, 9, X)<<endl;
}
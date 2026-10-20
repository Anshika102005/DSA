#include<iostream>
using namespace std;

bool linearSearch(int arr[], int X, int index, int N)
{
	//Base case
	if(index==N)
	return 0;

	if(arr[index] == X)
	return 1;

	return linearSearch(arr,X,index+1,N);
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int X = 7;
	cout<<linearSearch(arr,X,0,10)<<endl;

}
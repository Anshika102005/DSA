#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node * next;

	node(int value)
	{
		data = value;
		next = NULL;
	}
};

node* CreateLinked_list(int arr[], int index, int size)
{
	//Base case
	if(index==size)
	return NULL;

	//Recursive case
	node *temp;
	temp = new node(arr[index]);
	temp -> next = CreateLinked_list(arr, index+1, size);
	return temp;

}

int main()
{
	node *Head;
	Head = NULL;

	int arr[] = {2,4,6,78,8,9,10};
	// Create the linked list using recursion
	Head = CreateLinked_list(arr, 0, 7);


	// Print the linked list
	node *temp;
	temp = Head;
	while(temp)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
}
//Timecomplexity o(n)
//Spacecomplexity o(n) for recursion stack
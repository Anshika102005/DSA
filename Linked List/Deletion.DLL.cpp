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

	int arr[] = {1,2,3,4,5};
	// Create the linked list using recursion
	Head = CreateLinked_list(arr, 0, 5);

	//Delete the first node
	if(Head != NULL);
	{
		//IF the only one node exist 
		if(Head->next == NULL)
		{
			delete Head;
			Head = NULL;

		}
		// if more than one node exist 
		else{
			node *temp = Head;
			Head = Head->next; // Move head to the next node
			delete temp; // Delete the old head
			Head->next = NULL; // Set the next of new head to NULL

		}
		
	}


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
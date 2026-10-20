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
int main()
{
	node *Head , *Tail;
	Head = NULL;
	Tail = NULL; // Initialize Tail pointer to NULL

	int arr[] = {2, 4, 6, 8, 10};
	// Insert the node at the end
	for(int i = 0; i < 5; i++)
	{
		// Linked list does not exist
		if(Head == NULL)
		{
			Head = new node(arr[i]);
			Tail = Head; // Initialize Tail to the first node
		}
		// Linked list exists
		else
		{
			Tail -> next = new node(arr[i]);
			Tail = Tail->next; // Move Tail to the new last node
		}
	}

	node *temp;
	temp = Head;
	// Print the linked list
	while(temp)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
}

































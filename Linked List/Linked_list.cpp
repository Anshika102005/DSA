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
	//Node A1(4);
	node * Head;
	Head = NULL; //Initialize the head pointer to NULL
	// cout <<Head -> data <<endl;
	// cout <<Head -> next <<endl;

	int arr[] = {2,4,6,8,10};

	//Insert the node at beginning


	//Linked list doesnot exist
	for(int i = 0; i<5; i++)
	{
		if(Head == NULL)
		{
			Head = new node(arr[i]);
		}
	//Linked list exist 
	else{
		node *temp;
		temp = new node(arr[i]);
		temp -> next = Head;
		Head = temp;
	}

	}
	//Print the linked list
	node *temp = Head;

	while(temp != NULL)
	{
		cout<<temp -> data<<" ";
		temp = temp->next;
	}
}


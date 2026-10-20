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

node *CreatedLinked_list(int arr[], int index, int size, node *prev)
{
	//Base Case
	if(index==size)
	{
		return prev;
	}
	node *temp;
	temp = new node(arr[index]);
	temp->next = prev;
	return CreatedLinked_list(arr, index+1, size, temp);

}

int main()
{
	node *Head;
	Head = NULL;

	int arr[] = {2,4,6,5,8,9,10,12};
	//Crate the linked list using recursion
	Head = CreatedLinked_list(arr, 0, 8, Head);

	//Delete the linked list 
	{
		node *temp = Head;
		Head = Head->next;
		delete temp;
	}
	//Delete a node at the end 
	if(Head!=NULL)
	{
		//Only one node is present
		if(Head->next==NULL)
		{
			node *temp;
			delete temp;
			Head = NULL;
		}
		//More than 1 node is present
		 else{
			node *curr = Head;
			node *prev = NULL;
			//current node is not NULL
			while(curr->next!=NULL)
			{
				prev = curr;
				curr = curr->next;
			}
			prev->next = curr->next;
			delete curr;
		 }
		
		
	}

	//Print the linked list
	node *temp;
	temp = Head;
	while(temp)
	{
	cout<<temp -> data<<" ";
	temp = temp -> next;
	} 



}

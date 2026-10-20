#include<iostream>
using namespace std;



class Node
{
	public:
	int data;
	Node *next;
	Node *prev;

	Node(int value)
	{
		data = value;
		next = prev = NULL;
	}
};
Node* CreateLinked_list(int arr[], int index, int size)
{
	//Base case
	if(index==size)
	return NULL;

	//Recursive case
	Node *temp;
	temp = new Node(arr[index]);
	temp -> next = CreateLinked_list(arr, index+1, size);
	return temp;

}

int main(){
	Node *head = NULL;

	int arr[] = {1, 2, 3, 4, 5};

	head = CreateLinked_list(arr,0,5);

	//Insert at any given position 
	int pos = 2;
	//Insert at start 
	if(pos ==0)
	{
		//Linked list exist na kare
		if(head==NULL)
		{
			head = new Node(5);
		}
		//Exist karti 
		else
		{
			Node *temp = new Node(5);
			temp->next = head;
			head->prev = temp;
			head = temp;

		}
	}
	else
	{
		Node * curr = head;
		//Go to the node , after which I have to insert 
		while(--pos)
		{
			curr = curr->next;

		};
		//Insert at the end 
		if(curr->next== NULL)//last node 
		{
			Node *temp = new Node(5);
			temp->prev=curr;
			curr->next = temp;
		}
		//Insert at middle 
		else
		{
			Node *temp = new Node(5);
			temp->next = curr->next;
			temp->prev = curr;
			curr->next->prev = temp;
			curr->next = temp;
		}
	}
	//Printing the list 
	Node *current = head;
	while(current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
}

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
int main(){
	Node *head = NULL, *tail = NULL;

	//Create Doubly linked list 
	int arr[] = {1,2,3,4,5};
	for(int i=0; i<5; i++)
	{
		//Linked Doesn't have any node
		if(head==NULL)
		{
			head = new Node(arr[i]);
			tail = head;
		}

		//Exist Karti hai 
		else{
			Node *temp = new Node (arr[i]);
			tail -> next = temp;
			temp -> prev = tail;
			tail = temp;
		}
	}

	Node *traversal = head;
	while(traversal != NULL);
	{
		cout << traversal->data<<" ";
		traversal = traversal->next;
	}
}
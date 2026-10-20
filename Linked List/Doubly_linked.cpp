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

	Node *head = NULL;

	//Inserting nodes at the beginning

	//Linked Doesn't have any node 
	if(head == NULL)
	{
		head = new Node(5);
	}
	//Already esxist 
	else
	{
		Node *temp = new Node(5);
		temp->next = head;
		head->prev = temp;
		head = temp;
	}
	//Printing the list 
	Node *current = head;
	while(current != NULL)
	{
		cout << current->data << " ";
		current = current->next;
	}
}

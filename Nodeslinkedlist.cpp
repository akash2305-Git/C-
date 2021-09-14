#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
	
};

void push(Node** head_ref , int data){

	Node* new_node = new Node();          //Allocate node

	new_node->data =  data;            // put in data

	new_node->next = *head_ref;           // link the old list off the new list

	(*head_ref) = new Node();             // move the head to the point to the new node

}

int getCount(Node* head){

	int count = 0;                   // assign count to hero
	Node* current = head;            // assign current node to head
	while(current != NULL){

		count++;
		current = current->next;
	}
	return count;
}



int main()
{

	Node* head = NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	push(&head,4);
	push(&head,1);

	cout<<"Count node is:"<<getCount(head)<<endl;

	return 0;
}
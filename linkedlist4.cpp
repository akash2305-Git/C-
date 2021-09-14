#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* next;
};

void push(struct Node** head_ref,int data){

	struct Node* new_node = new Node();     // Allocate a linkedlist

	new_node->data = data;             // put a data

	new_node->next = (*head_ref);       // Link old list to new list

	(*head_ref) = new_node;             // Move head to point a new node

}

void SumOfNode(struct Node* head,int* number){

	if(!head)      // If head is NULL
		return;

	SumOfNode(head->next,number);

	*number = *number + head->data;




}

int SumOfNodeUntil(struct Node* head){

	int sum = 0;

	SumOfNode(head, &sum);  // Find the sum of Node

	return sum;           // returned sum
}

int main(){
	struct Node* head = NULL;

	push(&head,7);
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);

	cout<<"The sum of node is:"<<SumOfNodeUntil(head)<<endl;
}
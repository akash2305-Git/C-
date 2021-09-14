#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *next;
	
};

void push(Node** head_ref,int data){

	Node* new_node = new Node();  // Create a new Node

	new_node->data = data;    // Insert  a data

	new_node->next = (*head_ref);   // Make new node as head

	(*head_ref) = new_node;
}

void print(Node* node){
	
	cout<<"The List is";
	while(node != NULL){
		cout<< node->data << endl;
		node = node->next;
	}
}

int main(){

	Node* head = NULL;
	int n;
	cout<<"Enter a number of element:";
	cin>>n;

	for(int i=n;i>=0;i--){
		push(&head,i);
	}

	/*push(&head,7);
	push(&head,4);
	push(&head,8);
	push(&head,6);
	push(&head,2);
	push(&head,3); */

	cout<<"Created linkedlist is";
	print(head);

return 0;
	
}
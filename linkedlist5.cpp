#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};


void push(Node** ref, int data){

	Node* head = new Node();         // Add the new value to the linked list
	head->data = data;
	head->next = (*ref);
	(*ref) = head;
}

void deleteNode(Node** ref,int key){

	Node* temp = *ref;        // Store the head
	Node* pre = NULL;

	if(temp != NULL && temp->data == key){
		*ref = temp->next;
		delete temp;
		return;
	}
	else{
		while(temp != NULL && temp->data != key){
			pre = temp;
			temp = temp->next;
		}

		if(temp == NULL)
			return;

		pre->next = temp->next;

		delete temp;
	}
}

void print(Node* head){
	while(head != 0){
		cout<<head->data;
		head = head->next;
	}
}



int main(){

	Node* head = NULL;   // The node is pointing to  NULL
	
	push(&head,8);       // Add element to linkedlist
	push(&head,5);
	push(&head,2);
	push(&head,4);
	push(&head,3);

	cout<<"Created Linkedlist"<<endl;

	print(head);

	deleteNode(&head,5);

	cout<<"linked list after deletion"<<endl;

	print(head);



}
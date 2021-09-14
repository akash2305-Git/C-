#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	
	void deleteList(Node** headref){
		
		Node* current = *headref;
		Node* next = NULL;
		
		while (current != NULL){
			next = current->next;
			free(current);
			current = next;
		}
		
		*headref = NULL;
		 
	}
	
	void push(Node** headref,int newdata){
		Node* newNode = new Node();
		
		newNode->data = newdata;
		
		newnode->next = (*headref);
		
		(*headref) = newNode;
		
	}
	
	int main(){
		Node* head = NULL;
		
		push(&head,1);
		push(&head,4);
		push(&head,15);
		push(&head,1);
		push(&head,5);
		
		cout<<"deleting link list";
		deleteList(&head);
		cout<<"\nLinked list deleted"
	}
	
};

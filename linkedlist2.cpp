#include<iostream>
using namespace std;

// Linkedlist Node
struct Node
{
	int data;
	struct Node* next;
	Node(int data){
		this->data = data;
		next = NULL;
	}
};

struct Linkedlist{
	Node* head;
	Linkedlist() {head = NULL;}

	void reverse(){       // Function to reverse the linked list
		Node* current = head;
		Node* prev = NULL;
		Node *next = NULL;

		while(current != NULL){

			next = current->next;       // stores next
			current->next = prev;       // Reverse Current Nodes 
			prev = current;             // move pointer one position ahead
			current = next;

		}
		head = prev;
	}

	// Function to print linked list

	void print(){
		struct Node* temp = head;
		while(temp != NULL){
			cout<<temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data){
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}


};

int main(){

	Linkedlist li;
	li.push(20);
	li.push(4);
	li.push(15);
	li.push(85);
	li.push(50);

	cout<<"Given Linked list\n";
	li.print();

	li.reverse();

	cout<<"\nReversed Linked List \n";
	li.print();
	return 0;


}
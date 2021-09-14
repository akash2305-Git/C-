#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node *next;
};

void push(Node** head_ref,int data){
	Node* new_node = new Node();
	new_node->data = data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList(Node *node){
	while(node != NULL){
		cout<<node->data<<" ";
		node = node->next;

	}
}

void ReverseList()

int main(){
	Node* head = NULL;

	int n;
	cin>>n;
	//vector<int> s;
	for(int i=n;i>=0;i--){
		push(&head,i);
	}
	//push(&head,s);

	cout<<"Created Linkedlist is:";
	printList(head);
	return 0;
}
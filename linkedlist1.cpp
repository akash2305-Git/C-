#include<iostream>
using namespace std;

class Node{
	public:
		int Value;
		Node* Next;
};

void printNode(Node*n){
	while(n!=NULL){               /* Point each node print the value of each node then point the next value of the node until get NULL value */
	cout<< n->Value << endl;                            
	n = n->Next;
	}
	
	
}

int main(){
	Node* head = new Node();               /*Each node at end create new node and we use concept of pointer here */
	Node* second = new Node();
	Node* third = new Node();
	
	head->Value = 1;                      // We have save the value of first node
	head->Next = second;                  // From first node we point to next node
	second->Value = 2;
	second->Next = third;
	third->Value = 3;
	third->Next = NULL;
	
	printNode(head);
	
	system("pause 0");
	
}

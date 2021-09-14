#include<bits/stdc++.h>
using namespace std;

struct Node {
 	int data;
	struct Node *next;
 	
 }; 


struct Node* head = NULL;
void insert(int new_data){
	struct Node* new_data = new Node();
	new_data->data = new_data;
	new_data->next = head;
	head = new_data;
}

void print(){
	struct Node *temp = new Node();
	cout<<"linkedlist is:";
	while(temp->next != NULL){
		cout<<temp->data;
		temp = temp->next;

	}

}

int main(){

	int n,t;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	while(n--){
		cout<<"Enter a number:"<<endl;
		cin>>t;
		insert(t);
		
	}
	print();
}
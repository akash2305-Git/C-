
/*simple snippets Singly Linked List Data structure
 https://www.youtube.com/watch?v=IJrQCCmuaqc&list=PLIY8eNdw5tW_zX3OCzX7NJ8bL1p6pWfgG&index=10 */


#include<iostram>
using namespace std;

class node{
	public:
	int key;        //key used to specify the beginning
	int data;       
	Node* next;    // It will point the object of same class i.e Node of this class so that why Node*Next
	
	Node()  // Constructor
	{
		key=0;
		data=0;
		next*=NULL;
		
	}
	
	Node(int k,int d)  //paramatric constrctor 
	{
		key=k;
		data=d;
	}
	
};

class SinglyLinkedList{
	public:
		Node* head;   // For linked to multiple node we need head So Node* head
		
		SinglyLinkedList()   // Constructor
		{
			head = NULL;   // when we  store any address our default head should always be NULL
			
		}
		
		SinglyLinkedList(Node *n) // Constructor of Node who take address this is pass by address concept
		{
			head = n;       // This head will save the address
			
		}
	// 1 check the node exit for given key	
		Node* nodeExists(int k)       // This Function type check the key 
		{
			Node* temp = NULL;       // First time the head of the Node always NULL
			
			Node* ptr = head;        // This stores the address of the head node
			      
			while(ptr!=NULL)         
			{
				if(ptr->key==k)      // This will point the pointer key
				{
					temp=ptr;        // This will store the pointer in the temp that we have created in the function
				}
				ptr= ptr->next;     /* This will store the address of the next pointer so in the next iteration 
				                       of while loop it will point the head of the second node */
			}
			return temp;
		}
	// 2 append a node to the list
	    void appendNode(Node *n)
		{
			if(nodeExists(n->key)!=NULL)   /* This will check the key if the key that means the n you entered
			                                   is not equal to NULL it will simply return Node exits because for storing
			                                   the head the key should be null.*/
			{
				cout<<"Node Already Exists with the key value:"<<n->key<<"Append another key with different key value "<<endl;
			}
			else
			{
				if(head==NULL)
				{
					head = n;                    // if head is equal to null it will store the value
					cout<<"Node Appended"<<endl;
				}
				else
				{
					Node* ptr = head;         
					while(ptr-node != null)    /* This will point the head of the next node from the current node*/
					{
						ptr = ptr->next;
					}
					ptr->next = n;
					cout<<"Node Appended"<<endl;
				}
			}
		}
	//3  prepend Node - Attach a node at the start
	void prependNode(Node* n) 
	{
		if(nodeExits(n->key)!=NULL)   // check for the key if it is not NULL return the key value
		{
			cout<<"Node Alreay exists with the key value :"<<n->key<<"Append another node with different key value"<<endl;
		}
		else 
		{
			n->next=head;            // The node that want to prepend it will point to the first node of LinkedList
			head=n;
			cout<<"Node prepended"<<endl;
		}
	}
	
	// 4 Insert a node after a particular node in the list
	void insertNodeAfter (int k,Node* n)          //This will add a node after key value
	{
		Node* ptr = nodeExists(k);       // It will store the address of key that we pass in node ptr
		if(ptr==NULL)
		{
			cout<<"No node exists with the key value :"<<k<<endl;
		}
		else
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node Already exists with the key value :"<<n->key<<"Append Another node with different key value"<<endl;
			}
		    else
			{
			    n->next=ptr->next;          /* So this is the important step in this process so the next address of the 
			                               another node will point to the node which we want to insert and we have to 
			                               store the address of that another node in the node which we inserted */
			    ptr->next=n;
			    cout<<"Node Inserted"<<endl;
		}
	}
		
	}
	// 5 Delete node by unique key
	void deleteNodeByKey(int k)           // Pass the key value which we want to delete
	{
		if(head==NULL)                   
		{
			cout<<"Singly Linked List already Empty cant deleted"<<endl;
		}
		else if(head!==NULL)
		{
			if (head->key==k)
			{
				head = head->next;
				cout<<"Node Unlinked with the key value:"<<k<<endl;
			}
			else
			{
				Node* temp=NULL;                    // created temp to store NULL value
				Node* preptr = head;                // head of the current pointer 
				Node* currentptr = head->next;      // it will point the head of the  next node  
				while(currentptr!=NULL)             // We have to run while loop till it matches NULL value
				{
					if (currentptr->key==k)           // currentptr matches key value 
					{
						temp = currentptr;           // the currentptr is stored in temp
						currentptr=NULL;             // store NULL value in currentptr which result while loop will stop
					}
					else                            // This loop never goona execute 
					{
						preptr = preptr->next;
						currentptr = currentptr->next;
					}
				}
				if(temp!=NULL)                      // we have value of cuurentptr in temp that means this loop will execute 
				{
					preptr->next=temp->next;       // The next address of current ptr will save in the preptr 
					cout<<"Node Unlinked with the keys value :"<<k<<endl;
				}
				else
				{
					cout<<"Node doesn't exists with the key value :"<<k<<endl;
				}
			}
			
		}
	}
	// 6 update the node
	void updateNodeBykey(int k,int d)       // pass the key value which we want to update
	{
		Node* ptr = nodeExists(k);          // Store cuurent key value at ptr
		if(ptr!=NULL)
		{
			ptr->data=d;
			cout<<"Node Data update Sucessfully"<<endl;
		}
		else
		{
			cout<<"Node Doesn't exist with key value"<<k<<endl;
		}
	}
	// 7 printing
	void printList()
	{
		if(head==NULL)
		{
			cout<<"No Nodes in Singly Linked List";
		}
		else
		{
			cout<<endl<<"singly Linked List values :";
			Node* temp = head;
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")  -->";
				temp = temp->next;
			}
		}
	}
};

int main()
{
	
	SinglyLinkedList s;
	int option;
	int key1,k1,data1;
	do
	{
		cout<<"/n what operation do you want to perform ? select option number Enter 0 to exit"<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. insertNodeAfter()"<<endl;
		cout<<"4. deleteNodeByKey()"<<endl;
		cout<<"5. updateNodeByKey()"<<endl;
		cout<<"6 .print()"<<endl;
		cout<<"7 .clear screen"<<endl;
		
		cin>>option;
		Node* n1 = new Node();
		
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"Append Node Opeartion \nEnter key& data of the Node to be Appended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				s.appendNode(n1);
				break;	
		}
		
	}
}

 /* stack program by simple snippet 
    https://www.youtube.com/watch?v=08QSylWv6jM&list=PLIY8eNdw5tW_zX3OCzX7NJ8bL1p6pWfgG&index=6  */




#include<iostream>
#include<string>

using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
		
	public:
		Stack () // Default constructor
		{
			top = -1;       // firstly our stack is empty that why top=-1
			for (int i =0;i<5;i++)
			{
				arr[i]=0;        // for our array value should be zero
			}
		 } 
	bool isEmpty()  // bool function always return the true or false 
	{
		if(top==-1)  // check the first element of array
		return true;
		else
		return false;
		
	}
	
	bool isFull()  // check for the last element of array  
	{
		if(top==4)
		return true;
		else
		return false;
	}
	
	void push(int val) // Adding elements in array
	{
		if(isFull()) // This will check the isFull function         /* functions inside the class called as methods */
		{
			cout<<"stack Overfull";
		}
		else
		{
			top++;           // Every else part top will increase and we can store integer
			arr[top]=val;
		}
	}
	
	int pop()   // int because we removing value so it should have return type 
	{
		if(isEmpty())   // This will check Empty function
		{
			cout<<"Stack Underflow"<<endl;
			return 0;
		}
		else
		{
			int popValue = arr[top];  // we have created temp variable popValue 
			arr[top] = 0;             // we make that pop value as zero
			top --;                   // Decrease the array value
			return popValue;
		}
	}
	
	int count()             // Count the number
	{
		return(top+1);
	}
	int peek(int pos)         // change the value of the array
	{
		if(isEmpty())         // check the this function
		{
			cout<<"stack underflow"<<endl;
			return 0;
		}
		else
		{
			return arr[pos];
		}
	}
	
	void change(int pos,int val)       // This will change the value at that position
	{
		arr[pos]=val;
		cout<<"value changed at location"<<pos<<endl;
	}
	
	void display()
	{
		cout<<"All values in the stack are"<<endl;
		for(int i=4;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
		
	}
};

int main()
{
	Stack s1;
	int option,position,value;
	
	do
	{
		cout<<"what operation do you want to perform ?? select option number .Enter 0 to exit."<<endl;
		cout<<"1. push()"<<endl;
		cout<<"2. pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear section"<<endl;
		
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter an item to push in the stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Pop Function called -\n Poped Value"<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
				cout<<"stack is Empty"<<endl;
				else
				cout<<"stack is not Empty"<<endl;
				break;
			case 4:
				if(s1.isFull())
				cout<<"stack is Full"<<endl;
				else
				cout<<"stack is not Full"<<endl;
				break;
			case 5:
				cout<<"Enter a position of item you want to peek:"<<endl;
				cin>>option;
				cout<<"Peek Function called - Value at position "<< position<<"is"<<s1.peek(position)<<endl;
			case 6:
				cout<<"Count Function Called - number of items in the stack are:"<<s1.count()<<endl;
				break;
			case 7:
				cout<<"Change Function Called";
				cout<<"Enter Position of item you want to change :";
				cin>>position;
				cout<<endl;
				cout<<"Enter value of item you want to change :";
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				cout<<"Display Function Called -"<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Enter Proper Option Number"<<endl;
		}
			 		
					 
					 
					 

	}while(option!=0);
	
	return 0;
	
}

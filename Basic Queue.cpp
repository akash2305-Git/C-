#include <bits/stdc++.h>
using namespace std;

struct Queue{
	stack<int> s1,s2;
	
	
	void enQueue(int x){
		//move all the elements from s1 to s2
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		
		// push item into s1
		s1.push(x);
		
		// push Everything back to s1
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}
	// Dequeue an item from the queue
	int deQueue() 
	{
		// if first element is empty
		if(s1.empty()){
			cout<<" Q is empty";
			exit(0);
		
		}
		
		// Return top of s1
		int x = s1.top();
		s1.pop();
		return x;
		
	}
};

int main(){
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	
	cout << q.deQueue() << "\n" <<endl;
	cout << q.deQueue() << "\n" <<endl;
	cout << q.deQueue() << "\n" <<endl;	
	
	return 0;
}



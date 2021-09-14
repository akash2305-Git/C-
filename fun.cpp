#include<iostream>
using namespace std;


int swap(int *num1,int *num2){
	int t= *num1;
	*num1 = *num2;
	*num2 = t;
}
int main(){
	
	int p=7;
	int q=5;
	cout<<"The number before swap p is "<< p<<" ";
	cout<<"The number before swap q is"<<q <<" ";
	swap(&p,&q);
	
	cout<<"The number after swap p is "<< p<<" ";
	cout<<"The number after swap q is"<<q;
	
	return 0;
	
	
	
}

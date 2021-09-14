#include<iostream>
using namespace std;

int* Add(int* a,int* b){

	int* c;
	cout<<"The address of a in function is:"<<&a<<endl;;
	c = (*a) + (*b);
	return &c;
}


int main(){

	int a,b;
	a=5,b=5;
	int* ptr = Add(&a,&b);
	cout<<"The address of a in main is:"<<&a<<endl;;
	cout<<"The sum of a and b is:"<<*ptr<<endl;




}
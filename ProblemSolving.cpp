#include<bits/stdc++.h>
using namespace std;

int *multiply(int *a,int *b){   // when you receive the poiter in should be before variable
	int* c;
	*c = (*a)+(*b);
	return c;
}

int main(){
	int a=3,b=2;
	//cin>>a,b;
	int *ptr = multiply(&a,&b); // when you point the pointer it should after the data type & in pointer value pass by this & sign
	cout<<*ptr<<endl;           // For printing you need to derefernce it if we use "& " sign it will return the address 
	return 0;

}

#include<iostream>
using namespace std;

int Factorial(int n){
	
	if(n==1){             // When number comes to 1 it will return 1 same as maths
		return 1;
	}
	else if(n==0){       // The factorial of 0 is always 1 so it will return 1 same as maths
		return 1;
	}
	else{
		return n*Factorial(n-1);     // It will mutiply the current number and pass the (-1)value then to current value to function 
	}
}

int main(){
	
	int t;
	cout<<"Enter a number:";
	cin>>t;
	Factorial(t);
	cout<<"The Factorial of number is:"<<" " <<Factorial(t);

	return 0;
}
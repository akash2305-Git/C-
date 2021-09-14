#include<iostream>
using namespace std;

int multiple(int n){
	int t,s;
	for(int i=1;i<=n;i++){
		t = i*n ;
		//s = +t;
	}

	return t;
}

int main(){
	
	int n;
	cout<<"Enter a number";
	cin>>n;

	cout<<"The multiple of number is "<<multiple(n);
}
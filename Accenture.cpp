#include<iostream>
using namespace std;

int sum(int n){
	int t;
	int s=0;
	for(int i=1;i<=10;i++){
		t = i*n ;
		cout<<t<<" "<<endl;
		s = t+s;
	}
	
	

	return s;
}

int main(){
	
	int n;
	cout<<"Enter a number:";
	cin>>n;

	cout<<"The sum of number is: "<<sum(n);
	
}

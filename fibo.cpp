#include<iostream>
using namespace std;

int main(){
	
	int n;
	int t=0;
	cout<<"Enter a number";
	cin>>n;

	for(int i=1;i<=n;i++){
		cout<<t<<endl;
		t = t+i;
	}
	cout<<t;
}
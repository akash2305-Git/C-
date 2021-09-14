#include<iostream>
using namespace std;

int main(){
	int n,t,ls,sum;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		ls = n%10;    // Gives you last digit
		
		while(n>=10){           // loop will run till get first digit
			n/=10;
		}
		
		sum= n+ls;
		cout<<sum<<endl;
		
	}
	
	
	
}

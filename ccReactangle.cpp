#include<iostream>
using namespace std;

int main(){
	long t;
	cin>>t;
	long a,b,c,d;
		
	
	while(t--){
		cin>>a,b,c,d;
		
		if(a==b || c==d && a>b || c>d){
			cout<<"yes"<<endl;
		}
		else if(a>b || b>c && c>d&&a>d){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
}

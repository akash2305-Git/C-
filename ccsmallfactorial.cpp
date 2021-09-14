#include<iostream>
using namespace std;
int main(){
	int T,N;
	cin>>T;
	for(int i=0;i<T;i++){
	
		cin>>N;
		int fact =1;
		for(int i=1;i<=N;i++){
			fact = fact*i;
		}
		cout<<fact<<endl;
		
	}
}

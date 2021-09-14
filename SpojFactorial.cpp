#include<iostream>
using namespace std;


int main(){
	
	int t,l;
	cin>>t;
	int n[100];
	for(int i=0;i<t;i++){
		cin>>n[i];
	}
	for(int j=0;j<t;j++){
		for(int k=n[k];k<n[k];k++){
		if(n[k]>0){
			l = n[k]*n[k-1];
			n[k]=-1;
		}
		cout<<l<<endl;
	}
   }



	
	return 0;
}

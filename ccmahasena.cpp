#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int war[n];
	
	
	for(int i=0;i<n;i++){
		cin>>war[i];
	}
	
/*	for(int i=1;i<n;i++){
	    cout<<arr[i];
		}  */
    int even = 0;
	int odd = 0;
	for(int i=0;i<n;i++){
		
	    if (war[i]%2==0){
		    even ++;
	}
	    else {
		    odd ++;
	}
}
    if(even>odd){
    cout<<"READY FOR BATTLE";
}
    else{
	cout<<"NOT READY";
}
	
	
	
}

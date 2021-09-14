#include<bits/stdc++.h>
using namespace std;

int MaxDiff(int arr[],int n){

	vector<int> even;
	vector<int> odd;
	for(int i=0;i<=n;i++){
		if(arr[i]%2==0){
			even.push_back(i);
		}
		else{
			odd.push_back(i);
		}
	}
	if(even.size()>=odd.size()){
	//return 1;	
	}
	else if(odd.size()>=even.size()){

	 // return 1;
	}
	else return -1;
}


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The output is:"<<MaxDiff(arr,n)<<endl;
}
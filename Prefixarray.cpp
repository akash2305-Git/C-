#include<bits/stdc++.h>
using namespace std;

void maxsubarray(vector<int>arr,int n,int maxsub[]){

	maxsub[0] = arr[0];

	for(int i = 1;i<n;i++){
		maxsub[i] = maxsub[i-1] + arr[i];
	}
}

int main(){

	vector<int > arr = {5,20,10,30};

	int n = sizeof(arr)/sizeof(arr[0]);

	int maxsub[n];

	maxsubarray(arr,n,maxsub);

	for(int i=0;i<n;i++){
		cout<<maxsub[i]<<endl;
	}
}
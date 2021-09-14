#include<bits/stdc++.h>
using namespace std;

int Odd_even(vector<int>arr){
	vector<int>even;
	vector<int>odd;
	if(arr.size()==0 || arr.size()<=3)
		return 0;
	
	for(int i=0;i<=arr.size();i++){
		if(i%2==0){
			even.push_back(i);
		}
		else{
			odd.push_back(i);
		}
	}
	return (even[even.size()-2]+odd[odd.size()-2]);
}


int main(){

	vector<int > arr = {3,2,1,7,5,4};
	cout<<"The Difference is:"<<Odd_even(arr);
}
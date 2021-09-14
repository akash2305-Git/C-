// Program to find pair with a given sum of given sum in a sorted and rotated array
#include<iostream>
using namespace std;

// This function will return the pair of element from 1 to n-1 and return true or false
bool pairInSortedRotated(int arr[],int n,int x){
	
	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])
		break;
	
		
		int l = (i+1)%n;
		int r = i;
}
	// moving l and r till they meet
	
	while (l != r){
		// if sum is equal to x then return true
		if(arr[l] + arr[r] == x)
		return true;
		
		if (arr[l]+arr[r] < x){
			l = (l+1)%n;
		}
		else
		r = (n+r-1)%n;
	}
	return false;
}

int main(){
	int arr[] = {11,15,6,8,9,10};
	int sum = 16;
	int n = sizeof(arr)/sizeof(arr[0]);
	
	if(pairInSortedRotated(arr,n,sum))
	cout<<"Array has two element with sum 16";
	else
	cout<<"Array doesn't have two element with sum 16";
	
	return 0;
	
}

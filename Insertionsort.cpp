#include<iostream>
using namespace std;


void insertion(int arr[],int n){

	int i,j,key;

	for(i=1;i<n;i++){


		key = arr[i];     // Assign current array value to key
		j = i-1;          // Assign the j value by decreasing from 1

		while(j>=0 && arr[j]>key){

			arr[j+1] = arr[j];     // If first value is bigger than second it will swap the location 
			j = j-1;
		}
		arr[j+1] = key;
	}
}

void printarray(int arr[],int n){           // used to print the final output

	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){

	int arr[]={10,14,13,12,8};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertion(arr, n);
	printarray(arr, n);

	return 0;
}

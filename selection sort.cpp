#include<iostream>
using namespace std;

void swap(int *xp,int *yp){
	
	int temp = *xp;
	*xp = *yp;
	*yp =  temp;

}

void selectsort(int arr[],int n){
	int i,j,min_ind;
    //one by one move boundry of unsorted array
	for(int i=0;i<n-1;i++){
		min_ind = i;   // find minimum element in unsorted array
		for(int j=i+1;j<n;j++){
		if(arr[j] < arr[min_ind])
			min_ind = j;

			swap(&arr[min_ind],&arr[i]);
		}
	}
}

void printarray(int arr[],int size){

	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}

}
int main(){
	int t;
	cout<<"Enter a number of array element :";
	cin>>t;
	int arr[t];
	for(int i=0;i<=t;i++){
		cin>>arr[t];
	}
	int n = sizeof(arr)/sizeof(arr[0]);
	selectsort(arr,n);
	cout<<"sorted array";
	printarray(arr,n);

	return 0;


}

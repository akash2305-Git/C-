#include<bits/stdc++.h>
using namespace std;



int show(int a[],int array_size){
	
	for(int i=0;i<array_size;i++){
		cout<<a[i]<<endl;
	}
	
}
int main(){
	
	int a[]={1,0,6,8,7,9,7,6,3,2,4,5,6,77};
	int temp;
	int asize=sizeof(a)/sizeof(a[0]);
	 
	show(a , asize);      // show array
	
	sort(a,a+asize);       // sort array
	
	cout<<"array after sorting\n";
	
	show(a,asize);
	
	
	}
	
	
	


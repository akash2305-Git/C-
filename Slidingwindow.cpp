#include<bits/stdc++.h>
using namespace std;

void housing(int plot[],int n,int k){

	int i=0;
	int j=0;
	int cs = 0;

	while(j<n){
		//Expand to right

		cs += plot[j];
		j++;
		//Remove element from the left till cs>sum and i<j

		while(cs>k && i<j){
			cs = cs-plot[i];
			i++;
		}

		if(cs==k){
			cout<<i<< '-'<<j-1<<endl;
		} 
	}

}


int main()
{ 
	int plot[] = {1,3,2,1,4,1,3,2,1,1};
	int n = sizeof(plot)/sizeof(int);
	int k = 8;

	housing(plot,n,k);
	return 0;
}
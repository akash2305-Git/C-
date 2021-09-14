#include<bits/stdc++.h>
using namespace std;


int lower_bound(vector<int> n,int key){

	int s =0;
	int e = n.size()-1;
	int count = -1;
	

	while(s<=e){

		int mid = (s+e)/2;

		if(n[mid] == key){
			count = mid;
			e = mid-1;
		}
		else if(n[mid]>key){

			e = mid-1;
		}
		else{
			s = mid+1;
		}

	}

	return count;


}

int main(){

	vector<int> arr = {0,1,1,1,2,2,2,3,3,3,3,4,4,5,5,5};
	int n = arr.size();

	cout<<lower_bound(arr,3)<<endl;
}
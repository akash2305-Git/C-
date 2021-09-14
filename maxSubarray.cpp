#include<bits/stdc++.h>
using namespace std;

/*  
The complexity of this program is O(n)

int maxSub(vector<int>arr){           
	int sum = 0,best = 0;
	for(int i=0;i<arr.size();i++){
		sum = max(arr[i],sum+arr[i]);
		best = max(best,sum);
	}
	return best;
}

*/

int maxSub(int arr[]){              // The complexity of this program is O(n2)
	int best = 0;
	for(int i=0;i<arr.size();i++){
		int sum = 0;
		for(int j=0;j<arr.size();j++){
			sum += arr[j];
			best = max(best,sum);
		}

	}
	return best;
}

int main(){

	vector<int> arr = {-1,2,4,-3,5,2,-5,2};

	cout<<"The maximum subarray count is:"<<maxSub(arr);

}
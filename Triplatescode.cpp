#include<bits/stdc++.h>
using namespace std;

vector<vector<int >>tripate(vector<int> v,int target){

	sort(v.begin(),v.end());             // It will sort the Given  arrray element
	int n = v.size();                    // count the size of array
	vector<vector<int>> result;          // 2D vector

	for(int i=0;i<n;i++){
		int j = i+1;
	    int k = n-3;


	    while(j<k){              
		int current = v[i];            // This loop add the value from i,j and kth position
		current += v[j];
		current += v[k];

		if(current == target){                     // If the current sum equal to target will push_back into result vector
			result.push_back({v[i],v[j],v[k]});  
			j++;                                    //Increment J
			k--;                                    // Decrement K
		} 
		else if(current > target){
			k--;
		}
		else{
			j++;
		}
		}

	}
	return result;
}




int main(){

	vector<int > v = {1,3,2,4,6,7,8,5,9,10};

	int target = 12;

	auto result = tripate(v,target);

	for(auto x : result){
		for(auto no : x){
			cout<<no<<",";
		}
		cout<<endl;
	}

return 0;
}
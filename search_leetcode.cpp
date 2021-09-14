#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> n,int target){

	int count = 0;
	for(int i=0;i<=n.size();i++){
		if(n[i] == target){
			i = count+1;
		}
		else{
			count = -1;
		}
	}
	return count;

}

int main(){
	
	vector<int > n = {1,2,5,7,8,9};
	int target = 8;

	cout<<search(n,target)<<endl;

}
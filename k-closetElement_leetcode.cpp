#include<iostream>
#include<vector>
using namespace std;


vector<int > Closest_element(vector<int > arr,int a,int x){

	int s = 0;
	int e = arr.size()-1;

	int mid = s+e/2;

	vector<int> temp;

	for(int i=0;i<e;i++){
		if(s>=e)
			return 0;
		else if(arr[i] == x)
			arr.push_back(i) = temp;

	}
	return temp;


}

int main(){

	vector<int > arr = {1,2,3,4,5};

	int a = 4;
	int x = 3;

	Closest_element(arr,a,x);


}
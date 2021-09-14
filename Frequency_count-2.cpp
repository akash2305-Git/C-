#include<iostream>
#include<vector>
using namespace std;

int lower_bound(vector<int>arr , int key){

	int s = 0;
	int e = arr.size()-1;
	int count = -1;


	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			count = mid;
			e = mid -1;
		}
		else if(arr[mid]>key){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return count;
}

int upper_bound(vector<int>arr , int key){

	int s = 0;
	int e = arr.size()-1;
	int count = -1;


	while(s<=e){
		int mid = (s+e)/2;
		if(arr[mid]==key){
			count = mid;
			s = mid + 1;
		}
		else if(arr[mid]>key){
			e = mid - 1;
		}
		else{
			s = mid + 1;
		}
	}
	return count;
}






int main(){

	vector<int> arr = {0,1,1,2,2,3,3,3,3,5,5,7,7};
	int key = 3;
	//cin>>key;
	cout<<upper_bound(arr,key) - lower_bound(arr,key)<<endl;

}
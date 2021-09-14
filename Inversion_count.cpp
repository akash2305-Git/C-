#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int > &arr,int s,int e){

	int i = s;
	int m = (s+e)/2;
	int j = m+1;

	vector<int> temp;

	int count;

	while(i<=m and j<=e){
		if(arr[i] < arr[j]){
			temp.push_back(arr[i]);
			i++;
		}
		else{

			count += (m-i+1);
			temp.push_back(arr[j]);
			j++;
		}
	}

	while(i<=m){                  // copy the  element form first array
		temp.push_back(arr[i++]);
	}

	while(j<=e){                  // copy the element form second array
		temp.push_back(arr[j++]);
	}

	// copy the element from temp to original array
	int k=0;

	for(int idx=s;idx<=e;idx++){
		arr[idx] = temp[k++];
	}
	return count;
}


int Inversion_count(vector<int> &arr,int s,int e){

	//base case

	if(s>=e){
		return 0;
	}

	int m = (s+e)/2;
	int C1 = Inversion_count(arr,s,m);
	int C2 = Inversion_count(arr,m+1,e);
	int CM = merge(arr,s,e);
	return C1+C2+CM;
}

int main(){

	vector<int> arr = {10,7,4,6,3,2,1};

	int s = 0;
	int e = arr.size()-1;
	
	cout<<Inversion_count(arr,s,e);

	
	cout<<endl;



	return 0;
}
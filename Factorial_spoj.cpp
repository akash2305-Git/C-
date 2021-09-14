#include<iostream>
#include<vector>
using namespace std;

int factorial(int n){
  
	int result;

	if(n==1)
		return 1;
	else if(n==0)
		return 1;
	else
		n*factorial(n-1);
	
	result = factorial;

	return result;
}

int main(){
	
	int t,n;
	cin>>t;
	vector<int> temp;
	
	for(int i=0;i<t;i++){
		cin>>n;
		temp.push_back(n);
	}
	factorial(n);

	cout<<factorial(n);


	return 0;

}

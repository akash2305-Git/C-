#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	vector<int> p1;
	
	for(int i=0;i<n;i++){
		p1.push_back(i);
	}
	
	for(int i=p1.rbegin();i<rend();i++){
		cout<<i<<endl;
	}
	return 0;
}

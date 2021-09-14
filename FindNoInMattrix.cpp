#include<iostream>
#include<vector>
using namespace std;

pair<int,int> search(int m,int n,vector<vector<int,int>> v,int k){

	for(int i=0;i<3;i++){
		for (int j = 0; j < 3; j++)
		{
			cout<<v[i][j];
		}
	}

}


int main(){

	int m,n,k,temp;
	//cin>>m,n;
	m,n = 3;
	vector<vector<int,int>>v;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>temp;
			v.push_back(temp);
		}
	}
	k=10;

	search(m,n,v{},k);

	return 0;
}
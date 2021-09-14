#include<iostream>
#include<vector>
using namespace std;

#define TIE cin.tie(NULL);
#define BASE ios_base::sync_with_stdio(false);

int profit(int t,int n) {

	int amount = 0;
	int v,p,x;
	vector<int > a;
	for(int i=0;i<=n;i++){
		cin >> v >> p;
		v = v/(p+1);
		x = v*x;

		a.push_back(x);
	}
	cout<<(*max_element(a.begin(),a.end()))<<" ";
}

int main(){

	int T,N;

	cin>>T>>N;

	
	for(int i=0;i<T;i++){
		
			profit(T,N);
		
	}

	return 0;

}
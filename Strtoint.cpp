#include<bits/stdc++.h>
using namespace std;

int StrToint(string s){

	int n = s.length()-1;          // Convert string into number
	int ans = 0;
	int p = 1;
	for(int i=n;i>=0;i--){
		ans += ((s[i]-'0')*p);        //mutiply and add to answer as power of 10 increases
		p = p*10;
	}

	return ans;

}

int main(){

	string s;
	getline(cin,s);
	cout<<StrToint(s);
	//cout<< s << end;
}
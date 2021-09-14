#include<bits/stdc++.h>

using namespace std;

bool Issubset(string s1,string s2){
	int i = s1.length() - 1;
	int j = s2.length() - 1;
	while(i>=0 && j>=0){
		if(s2[j]==s1[i]){
			i--;
			j--;
		}
		else{
			i--;
		}
	}
	
	if(j==-1){
		return true;
	}
	return false;
}

/* Another code slighty different but same logic
bool Issubset(string s1,string s2){
	int i = s1.length() ;
	int j = s2.length() ;
	while(i>0 && j>0){
		if(s2[j]==s1[i]){
			i--;
			j--;
		}
		else{
			i--;
		}
	}
	
	if(j==0){
		return true;
	}
	return false;
}

*/


int main(){
	string s1,s2;
	cout<<"Enter two string:";
	cin>>s1>>s2;
	cout<<Issubset(s1,s2)<<endl;
}
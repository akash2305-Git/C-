#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n=3;
	vector<string> stt;
	string s;
	//getline(cin,s,'.');
	//cin>>n;

	while(n--){
		getline(cin,s);     // It will take string as input
		stt.push_back(s);   // It will push string into the vector array
	}

	for(string x:stt){
		cout<<x<< ",";            // In this loop it will print each string 
	}

	//cout<< s <<endl;



}
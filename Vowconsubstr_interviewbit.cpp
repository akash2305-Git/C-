#include<iostream>
using namespace std;


int solve_string(string str){

	for(int i=0;i<str.size();i++){
		cout<<str[i]<<endl;
	}
	
}

int main(){

	vector<char> s = {'ab','a','ba'};
	solve_string(vector<char> s);
	
}
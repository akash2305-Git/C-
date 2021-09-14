#include<iostream>
#include<vector>
#include<sstream>
#include <cstring>
using namespace std;

int main(){

	string input;
	getline(cin,input);

	stringstream ss(input);   // Create a streamstring object

	string token;
	vector<string> tokens;     //Vector array to put string 

	while(getline(ss,token,' ')){
		tokens.push_back(token);     //This will put each word into tokens from a sentance
	}

	for(auto token:tokens){
		cout<<token<<",";           // Loop simply run through array and put commas and whatever you want
	}
}
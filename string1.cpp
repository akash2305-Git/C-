#include<bits/stdc++.h>
using namespace std;


int countword(string str){
	
    stringstream s(str);  // Divide string into words
	string word;          // To store words
	int count;
	while(s >> word){
		count++;
		return count;
	}
}
int main(){
	string s = "Geek contribute for placement";
	cout<<"The Words are:"<<countword(s);
}

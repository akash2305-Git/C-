#include<iostream>
using namespace std;

int main(){
	string str;
	char s;
	int count =0;
	cout<<"Enter a string";
	cin>>str;
	for(int i=0;i<str.size();++i){
		if(str[i] == s){
			count++;
		}
		else{
			count=0;
		}
	}
	cout<<"count"<<count;
}

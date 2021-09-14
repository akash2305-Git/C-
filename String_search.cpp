#include<iostream>
#include<string>
using namespace std;


int main(){

	string para = " I love my India I love my India I love my India I love my India I love my India I love my India";

	string word;
	getline(cin,word);

	int index = para.find(word);

	if(index!=-1){
		cout<<"first occurance "<<index;
	}

	index = para.find(word,index+1);
	if(index!=-1){
		cout<<"second occurance "<<index;
	}
}
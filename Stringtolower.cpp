#include<bits/stdc++.h>
using namespace std;

int main(){

	string name;
	cout<<"enter a string:";
	getline(cin,name);
	

	/*  First method by using the inbuild function

	int i =0;

	while(i<name.length()){
		if(isupper(name[i])){
			name[i] = tolower(name[i]);    //This Function convert UPPERCLASS into lowerclass
		}
		i++;
	}
	cout<<"\n The lowercase of string is:"<<name;    */

	for(int i=0;i<name.length();i++){
		if(name[i]>='A' && name[i]<='Z'){     //Range of alphabet 
			name[i] = name[i] + 32;           // Then we add 32 because after 32 all letter converted into small letter by ASCII value
		}
	}
	cout<<"The lower case of the string is:"<<name;


}
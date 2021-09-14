#include<bits/stdc++.h>
using namespace std;


int main(){

	char input[1000];                      // This is array of characters
	cin.getline(input,1000);

	char *str = strtok(input," ");         // This will separate word from string

	while(str!=NULL){                      // Loop run until NULL       
		cout<<str<<endl;                         // We print the word which is separated by strtok function then put NULL 
		str = strtok(NULL," ");            // when null is encounter loop will stop
	}

	return 0;


}
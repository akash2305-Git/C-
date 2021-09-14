#include<iostream>
using namespace std;


int Bitwise_pair(char s[],int t){

	int count = 0;
	for(int i=0;i<t;i++){
		if(s[i]==s[i+1]){
			count += 2;
		}
		else{
			count += 1;
		}
		i++;
	}
	return count;
	
}

int main(){
	
	int t;
	char s[]="aabc";
	for(int i=0;i<t;i++){
		Bitwise_pair(s ,t); 

	}
	return 0;
}
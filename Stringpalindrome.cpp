#include<bits/stdc++.h>
using namespace std;


int main(){
	char string1[20];
	int i,len1;
	int flag=0;
	
	cout<<"Enter a string:";
	cin>>string1;
	
	len1 = strlen(string1);
	
	for(int i=0;i<len1;i++){
		if(string1[i] != string1[len1-i-1]){
			flag=1;
			break;
		}
	}
	
	if(flag){
		cout<<"string is not palindrome"<<endl;
	}
	else{
		cout<<"String is palindrome"<<endl;
	}
	system("pause");
	return 0;
	

}

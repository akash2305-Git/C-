#include<iostream>
#include<vector>
using namespace std;


vector<string> fizzbuzz(int n){
	for(int i=0;i<=n;i++){
		if(i== n%3 || i == n%7){
			cout<<"FizzBuzz";
		}
		else if(i == n%5){
			cout<<"Fizz";
		}
		else if(i == n%3){
			cout<<"Buzz";
		}
		else{
			
		}
	}
}

int main(){
	
	}

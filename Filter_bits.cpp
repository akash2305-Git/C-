#include<iostream>
using namespace std;


void Filter_bits(char arr[],int num){

	int j=0;
	while(num>0){
		int last_bits = (num&1);
		if(last_bits){
			cout<<arr[j];
		}
		j++;
		num = (num>>1);
	}
	cout<<endl;
}

int main(){

	char arr[] = "abc";
	int n = 3;

	for(int i=0;i<(1<<n);i++){

		Filter_bits(arr,i);
	}
}
#include<bits/stdc++.h>
using namespace std;

int Difference(int n,int m){

	int Total=0;
	int Non_div = 0;

	for(int i=1;i<=m;i++){
		if(i%n==0){
			Total += i;

		}
		else{
			Non_div += i;
		}

	}
	return Non_div-Total;
}


int main(){

	int n,m;
	cin>>n>>m;
	cout<<"The answer is:"<<Difference(n,m);

	return 0;
}
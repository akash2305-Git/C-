#include<iostream>
using namespace std;

//function to print permutation 
//it takes three input
//string 
//Starting index 
//Ending index
void permute(string s,int l,int r){

	if(l == r)
		cout<<s<<endl;

	else{
		//permutation made
		for(int i=l;i<=r;i++){

			swap(s[l],s[i]);     // swap is inbuild function 

			permute(s,l+1,r);

			swap(s[l],s[i]);
		}
	}
	
}
//Driver mode
int main(){

	string str = "ABC";
	int n = str.size();

	permute(str,0,n-1);

	return 0;


	
}
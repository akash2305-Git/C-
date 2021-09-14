#include<iostream>
using namespace std;

int main(){
	int T,a,b,c,d;
	int le,be;
	cin>>T;
	for (int i=0;i<T;i++){
		cin>>a,b,c,d;
		le = a+c;
		be = b+d;
		
		if((le==be)||(a==c&&b==d)||(a==d&&b==c)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}

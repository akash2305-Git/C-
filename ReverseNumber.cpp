#include<iostream>
using namespace std;

int main(){
	int r;
	int n;
	cin>>r;
	for (int i=0;i<r;i++) {
		cin>>n;
		bool leadingZero=true;
		while(n>0) {
			if(n%10==0 && leadingZero) {
				n/=10;
				continue;
			}
			leadingZero = false;
			cout<<n%10;
			n/=10;
		}
		cout<<endl;
	}
	return 0;
	
}

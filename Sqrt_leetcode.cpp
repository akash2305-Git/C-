#include<iostream>
#include<cmath>
using namespace std;

int mySqrt(int n){

	int s;

	s = sqrt(n);

	return s;

}

int main(){

	int n;
	cin>>n;
	cout<<mySqrt(n);
}
#include<iostream>
#include<vector>
using namespace std;

int squareNo(int &n1[],int n) {

	int t = sizeof(n1);
	int temp[t];
	for(int i=0;i<=n;i++){
		temp[i] = n1[i]*n1[i];

	}
	return temp[];
}

int main(){

	std::vector<int> n1;
	n1 = {2,3,5,7,8,9};
	int n = sizeof(n1)/sizeof(n1[0]);
	squareNo(*n1,n);


}
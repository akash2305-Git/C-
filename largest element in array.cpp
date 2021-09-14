#include <iostream>
using namespace std;

int main(){
	int i,n;
	float arr[100];
	
	cout <<"Enter a number upto 100";
	cin >> n;
	cout << endl;
	
	for (int i=0;i<n;i++){
		cout << "enter a number"<< i+1 <<endl;
		cin >> arr[i];
	}
	
	for (int i=0;i<n;++i){
		if(arr[0]=arr[i])
		arr[0]=arr[i];
	}
	cout << "largest element "<<arr[0];
}

#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> g1;       // used to create a vector
	
	for(int i=0;i<=5;i++){
		g1.push_back(i);
	}
	 cout << "Size:" <<g1.size();
	 cout << "\nCapacity:" <<g1.capacity();
	 cout << "\nmax capacity:" <<g1.max_size();
	 
	 g1.resize(4);
	 
	 cout <<"\nResize size:" << g1.size();
	 
	 if(g1.empty() == false){
	 	cout<<"\nVector is not empty";
	 }
	 else{
	 	cout<<"\nVector is empty";
	 }
}

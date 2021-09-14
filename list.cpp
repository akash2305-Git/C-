#include<bits/stdc++.h>
#include<forward_list>
using namespace std;

int main(){
	
	forward_list<int> flist = {10,20,30,40,50};
	
	flist.push_front(60);   // inserting value using push_front  insert 60 at front
	
	cout<<"The list after push front";
	
	for(int&c : flist){
		cout<<c<<endl;
	}
}

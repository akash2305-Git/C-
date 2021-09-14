#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

	stack<char > s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	s.push('f');

	cout<< s.pop() <<endl;
}
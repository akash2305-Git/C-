#include<bits/stdc++.h>
using namespace std;

void countGoodstring(string s){
	unordered_map<char,int> sub;
        int n = s.size();
        int i = 0;
        while(i<=n){
            sub.insert(make_pair(i,s[i]));
            i++;
        }
        

       
}


int main(){
	string s;
	cin>>s;
	countGoodstring(s);
}
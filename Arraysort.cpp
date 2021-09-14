#include<bits/stdc++.h>
using namespace std;




int main(){
	vector<int>v = {1,3,4,3,2,5,8};
	vector<int>v1;

	//sort(v.begin(),v.end());
	//cout<<"sorted arrays are"<<endl;
    int i = 0;
    int j = i+1;
    while(i>0 || j>0){
    	if(v[i]>=v[j]){
    		v1.push_back(i);
    		i++;
    	}
    	else{
    		v1.push_back(j);
    		j++;
    	}
    }
	cout<<"The sorted array is:"<<endl;
	for(int j=0;j<sizeof(v1);j++){
		cout<<v1[j]<<endl;
	}
}
#include<iostream>
#include<vector>
using namespace std;

float square_root(int N,int P){

	int s = 0;
	int e = N;
	float ans = 0;

	//Binary search from 0 to N
	while(s<=e){
		int mid = (s+e)/2;
		if(mid*mid==N){
			return mid;
		}
		else if(mid*mid < N){
			ans = mid;
			s = mid + 1;
		}
		else{
			//ans = mid 
			e = mid - 1;
		}

	}
	// we do linear search for decimal places
	int inc = 0.1;
	for(int place=1;place<=P;place++){

		// do linear search
		while(ans*ans <= N){
			ans += inc;
		}

		// take one step back
		ans = ans - inc;
		inc = inc/10.0;

	}


	return ans;


}



int main(){
	int n,p;
	//cin>>n,p;

	cout<<square_root(10,3)<<endl;

}
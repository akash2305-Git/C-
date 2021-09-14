#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

void replace_space(char *s){
    
    // Calculate the spaces
	int space = 0;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=' '){
			space += 1;
		}
	}

	int idx = strlen(s) + 2*space;   // This will count the Idx with space
	s[idx] = '\0';

	for(int i = strlen(s)-1;i>=0;i++){             // Start loop from end of sentance as soon as space encounter put 0 then 2 then %
		if(s[i] == ' '){                           // Then decrease idx by 3 positon.
			s[idx-1] = '0';
			s[idx-2] = '2';
			s[idx-3] = '%';
			idx = idx - 3;
		}
		else{
			s[idx-1] = s[i];                 // If there is no space it will return whole sentance as it is
			idx--;
		}

	}

}




int main(){

	char s[1000];
	cin.getline(s,1000);
	replace_space(s);
	cout<< s <<endl;
}
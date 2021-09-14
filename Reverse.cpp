#include <iostream>
using namespace std;

int reverse(int num){
  int rev=0;
  while(num >0){
  rev = rev*10+num%10;
  num = num/10;
}
  return rev;
    
}
int main() {
	// your code goes here
   int digi;
   cout<<"enter a number";
   cin >> digi;
   reverse(digi);
	
	return 0;
}


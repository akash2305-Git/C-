
/* Pointer the important concept in programming
 * I learn this pointer concept and implement it in the following program
 * I took the refernce of this video
 * https://www.youtube.com/watch?v=h-HBipu_1P0
 * https://www.youtube.com/watch?v=X1DcpcgSUXw
 * youtube - mycodeschool
 */
#include<bits/stdc++.h>
using namespace std;


int main(){

	int a = 5;        // we have assign the value to variable a as 5.
	int *p;           // We create pointer by *p.

	p = &a;            // we given address of a to p by &a.


	cout<<"The value of a is:"<<p<<endl;     // IF I just write variable without derefernce it gives me address of variable

	cout<<"The value of a is:"<<*p<<endl;    // The *p is known as dereferencing and it return the value of a through address

	*p = 8;                                  // If I want to change in value of a simply by pointing this is the way
	cout<<"The value of a is:"<<*p<<endl;

	return 0;
}



	
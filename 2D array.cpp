// using fix array matrix size
#include<iostream>
#include<iomanip>
using namespace std;

auto main() -> int
{
	
	int const y_row = 3;
	int const x_row = 5;
	int const m[y_row][x_row]=   // a raw array matrix
	{
		{1,2,3,4,5},
		{4,5,6,7,8},
		{5,6,7,8,9}
	};
	
	for (int i =0;i < y_row;i++)
	{
		for (int j=0;j < x_row;j++)
		{
			cout<< setw[ ] << m[i][j]; 
		}
		
		cout << '/n';
	}
}

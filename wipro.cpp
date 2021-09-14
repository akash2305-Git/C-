#include<iostream>
using namespace std;

int main()
{
	int n,k;
	int temp=0;
	cout<<"Enter a number";
	cin>>n;
	int arr[100];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter a number:";
		cin>> arr[i];
		
	}
  /* for(int l=0;l<n;l++)
	{
		cout<<arr[l]<<endl;
	}   */
	
	for (int k=0;k<n;++k)  // run the code according to number of input
	{
		if (arr[k]==1)     
		{
		
		temp = arr[k]+temp;
		cout<<arr[k]<<endl;
		}
		else
		{
		temp = arr[k]+temp;
		cout<<temp<<endl;
		}
		
		
	
	}
	//cout<<temp<<endl;

}

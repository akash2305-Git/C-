#include<iostream>
using namespace std;

int main()
{
	int n;
	int temp = 0;
	int count = 0;
	cout<<"enter a number";
	cin>>n;
	int ticket[100];
	
	for(int i=0;i<n;i++)
	{
		cout<<"enter a ticket No:"<<endl;
		cin>>ticket[i];
	}
	
	for(int k=0;k<n;k++)
	{
		temp = ticket[k];
		if(ticket[k]<=ticket[k+1])
		{
			count++;
			cout<<ticket[k+1]<<endl;
		}
		else
		{
			cout<<ticket[k]<<endl;
		}
		
	}
}

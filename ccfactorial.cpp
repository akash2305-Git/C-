#include<iostream>
using namespace std;

void factorial(long  n)
{
 int z=0;
 for(long i=5;i<=n;i=i*5)
 z+= n/i;
  cout<<z<<"\n";
}
int main()
{

long T,N;
cin>>T;
long A[T];
for(long i=0;i<T;i++)
cin>>A[i];
for(long i=0;i<T;i++)
factorial(A[i]);

return 0;
}

#include<iostream>
using namespace std;
int fib(int n)
{
	int t1=0,t2=1,s,i;
	if(n<=1)
	{
		return n;
	}
	for(i=2;i<=n;i++)
	{
		s=t1+t2;
		t1=t2;
		t2=s;
	}
	return s;
}
int main()
{
	for(int i=0;i<=5;i++)
	{
		cout<<fib(i)<<" ";
	}
	return 0;
}
//Time Complexity is O(n)

#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}
int nCr(int n,int r)
{
	if(r>n)
	{
		return 0;
	}
	int t1,t2,t3;
	t1=fact(n);
	t2=fact(r);
	t3=fact(n-r);
	return t1/(t2*t3);
}
int main()
{
	cout<<nCr(3,2);
	return 0;
}
//Time Complexity is O(n)

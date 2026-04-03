#include<iostream>
using namespace std;
//Using Recursion
/*int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return sum(n-1)+n;
	}
}
int main()
{
	int r;
	r=sum(5);
	cout<<r;
	return 0;
}*/

//Using iterator loop
int sum(int n)
{
	int i,s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}
int main()
{
	int r;
	r=sum(5);
	cout<<r;
	return 0;
}

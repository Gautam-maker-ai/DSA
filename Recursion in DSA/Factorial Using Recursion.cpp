#include<iostream>
using namespace std;
//Using Recursion
/*int fact(int n)
{
	if(n<=0)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}
int main()
{
	int r;
	r=fact(5);
	cout<<r;
	return 0;
}*/
//Using loop
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
	int r;
	r=fact(5);
	cout<<r;
	return 0;
}

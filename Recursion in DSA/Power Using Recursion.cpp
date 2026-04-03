#include<iostream>
using namespace std;
//Using More Calls 9 times
/*int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return pow(m,n-1)*m;
	}
}
int main()
{
	int r;
	r=pow(2,5);
	cout<<r;
	return 0;
}*/
//Using Less Calls 
int pow(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		if(n%2==0)
		{
			return pow(m*m,n/2);
		}
		else
		{
			return m*pow(m*m,(n-1)/2);
		}
	}
}
int main()
{
	int r;
	r=pow(2,9);
	cout<<r;
	return 0;
}

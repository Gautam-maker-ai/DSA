#include<iostream>
using namespace std;
int main()
{
	int* p = new int[5];
	cout<<"\nEnter 5 elements:";
	for(int i=0;i<5;i++)
	{
		cin>>p[i];
	}
	int* q = new int[10];
	for(int i=0;i<5;i++)
	{
		q[i]=p[i];
	}
	for(int i=5;i<10;i++)
	{
		q[i]=0;
	}
	delete []p;
	p=q;
	for(int i=0;i<10;i++)
	{
		cout<<p[i]<<" ";
	}
	delete []p;
	return 0;
}

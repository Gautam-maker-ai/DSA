#include<iostream>
using namespace std;
class Array
{
	public:
		   int A[10],B[10],C[20];
		   int m,n;
		  int isPresent(int x, int k)
		  {
		  	for(int i=0;i<k;i++)
		  	{
		  		if(C[i]==x)
		  		{
		  			return 1;
				}
			}
			return 0;
		  }
		  void Union()
		  {
		  	int k=0;
		  	for(int i=0;i<m;i++)
		  	{
		  		C[k++]=A[i];
			}
			for(int j=0;j<n;j++)
			{
				if(!isPresent(B[j],k))
				{
					C[k++]=B[j];
				}
			}
			cout<<"Union Is:";
			for(int i=0;i<k;i++)
			{
				cout<<C[i]<<" ";
			}
		  }
};
int main()
{
	Array ar1;
	cout<<"Enter Size of Array A:";
	cin>>ar1.m;
	for(int i=0;i<ar1.m;i++)
	{
		cin>>ar1.A[i];
	}
	cout<<"Enter Size of Array B:";
	cin>>ar1.n;
	for(int j=0;j<ar1.n;j++)
	{
		cin>>ar1.B[j];
	}
	ar1.Union();
	return 0;
}


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
		  	int i=0,j=0,k=0;
		  	while(i<m && j<n)
		  	{
		  		if(A[i]<B[j])
		  		{
		  			C[k++]=A[i++];
				}
				else if(A[i]>B[j])
				{
					C[k++]=B[j++];
				}
				else
				{
				C[k++]=A[i++];
				j++;
				}
			}
			while(i<m)
			{
				C[k++]=A[i++];
			}
			while(j<n)
			{
				C[k++]=B[j++];
			}
			cout<<"Sorted Union: ";
		    for(int i=0;i<k;i++)
		    {
		 	   cout<<C[i]<<" ";
		    }
		     cout<<endl;
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


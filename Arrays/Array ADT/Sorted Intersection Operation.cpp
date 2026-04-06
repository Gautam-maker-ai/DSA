#include<iostream>
using namespace std;
class Array
{
	public:
		   int A[10],B[10],C[20];
		   int m,n;
		   
		   void Intersection()
		   {
		   	
			int i=0,j=0;
			while(i<m && j<n)
			{
				if(A[i]==B[j])
				{
					cout<<A[i]<<" ";
					i++;
					j++;
				}
				else if(A[i]<B[j])
				{
					i++;
				}
				else
				{
					j++;
				}
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
	cout<<"Intersection is:";
	ar1.Intersection();
	return 0;
}


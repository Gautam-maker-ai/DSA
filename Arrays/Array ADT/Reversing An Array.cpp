#include<iostream>
using namespace std;
class Array
{
	public:
		   int A[10];
		   int size;
		   int length;
		   void display()
		   {
		   	for(int i=0;i<length;i++)
		   	{
		   		cout<<A[i]<<" ";
			}
			cout<<endl;
		   }
		   void Reverse()
		   {
		   	int *B = new int[10];
		   	for(int i=length-1,j=0;i>=0;i--,j++)
		   	{
		   		B[j]=A[i];
			}
			for(int i=0;i<length;i++)
			{
				A[i]=B[i];
			}
			cout<<endl;
		   }
};
int main()
{
	Array ar1;
	cout<<"Enter number of elements:";
	cin>>ar1.length;
	ar1.size=10;
	cout<<"Enter "<<ar1.length<<" elements:";
	for(int i=0;i<ar1.length;i++)
	{
		cin>>ar1.A[i];
	}
	ar1.Reverse();
	ar1.display();
	return 0;
}

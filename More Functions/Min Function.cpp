#include<iostream>
using namespace std;
class Array
{
	public:
		   int A[10];
		   int length;
		   int size;
		   
		   void display()
		   {
		   	cout<<"Elements Are:";
		   for(int i=0;i<length;i++)
		   {
		   	cout<<A[i]<<" ";
		   }
		   }
		   int min()
		   {
		   	int min=A[0];
		   	for(int i=0;i<length;i++)
		   	{
		   		if(A[i]<min)
		   		{
		   			min=A[i];
			    }
			   }
			   return min;
		   }
};
int main()
{
	Array ar1;
	cout<<"Enter Number of Elements:";
	cin>>ar1.length;
	ar1.size=10;
	cout<<"Enter "<<ar1.length<<" element:"<<endl;
	for(int i=0;i<ar1.length;i++)
	{
		cin>>ar1.A[i];
	}
	cout<<"Minimum Element is:"<<ar1.min();
	return 0;
}

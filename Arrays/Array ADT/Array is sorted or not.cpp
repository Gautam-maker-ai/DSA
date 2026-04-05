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
		   bool isSorted()
		   {
		   	for(int i=0;i<length-1;i++)
		   	{
		   		if(A[i]>A[i+1])
		   		{
		   			return false;
				}
			   }
			   return true;
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
	if(ar1.isSorted())
	{
		cout<<"Sorted"<<endl;
	}
	else
	{
		cout<<"Not Sorted"<<endl;
	}
	ar1.display();
	return 0;
}

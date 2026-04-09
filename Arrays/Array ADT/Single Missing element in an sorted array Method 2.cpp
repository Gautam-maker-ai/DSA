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
		   	for(int i=0;i<length;i++)
		   	{
		   		cout<<A[i]<<" ";
		    }
		    cout<<endl;
		   }
		   void Missing()
		   {
		   	int l=0,h=length-1;
		   	int diff=length-0;
		   	for(int i=0;i<length;i++)
		   	{
		   		if(A[i]-i!=diff)
		   		{
		   			cout<<"Missing Element is:"<<i+diff<<endl;
		   			break;
				}
	        }
		   }
};
int main()
{
	Array ar1;
	cout<<"Enter Number of Elements:";
	cin>>ar1.length;
	ar1.size=10;
	cout<<"Enter "<<ar1.length<<" Elements:";
	for(int i=0;i<ar1.length;i++)
	{
		cin>>ar1.A[i];
	}
	ar1.display();
	ar1.Missing();
	return 0;
}

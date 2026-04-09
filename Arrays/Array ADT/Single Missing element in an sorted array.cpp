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
		   	int sum=0;
		   	int n=A[length-1];
		   	for(int i=0;i<length;i++)
		   	{
		   		sum=sum+A[i];
			}
			int s=n*(n+1)/2;
			cout<<"Missing Element is:"<<s-sum<<endl;
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

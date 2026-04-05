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
		   void insert(int x)
		   {
		    if(length==size)
		    { 
		      cout<<"Array is full";
		      return ;
		    }
		   	int i=length-1;
		   	while(i>0 &&A[i]>x)
		   	{
		   	  A[i+1]=A[i];
		   	  i--;
			}
			A[i+1]=x;
			length++;
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
	ar1.insert(18);
	ar1.display();
	return 0;
}

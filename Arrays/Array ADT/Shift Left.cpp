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
		   void ShiftLeft()
		   {
		   	int temp=A[0];
		   	for(int i=0;i<length-1;i++)
		   	{
		   		A[i]=A[i+1];
			}
			A[length-1]=0;
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
	ar1.ShiftLeft();
	ar1.display();
	return 0;
}

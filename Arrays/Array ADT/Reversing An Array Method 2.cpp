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
		   void swap(int &x,int &y)
		   {
		   	int temp=x;
		   	x=y;
		   	y=temp;
		   }
		   void Reverse()
		   {
		   	for(int i=0,j=length-1;i<j;i++,j--)
		   	{
		   		swap(A[i],A[j]);
			}
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

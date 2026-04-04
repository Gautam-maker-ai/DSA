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
		   int Set(int index,int val)
		   {
		   	if(index>=0 && index<length)
		   	{
		   		A[index]=val;
		    }
		    return -1;
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
    int index, value;
    cout<<"Enter Index to Update: ";
    cin>>index;
    cout<<"Enter New Value: ";
    cin>>value;
    ar1.Set(index, value);  
    cout<<"Updated Array:\n";
    ar1.display();
	return 0;
}

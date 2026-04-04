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
		   int Get(int index)
		   {
		   	if(index>=0 && index<length)
		   	{
		   		return A[index];
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
    int index;
    cout << "Enter Index: ";
    cin >> index;
    cout << "Value at index: " << ar1.Get(index);
	return 0;
}

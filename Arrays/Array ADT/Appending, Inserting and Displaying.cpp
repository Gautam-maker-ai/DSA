#include<iostream>
using namespace std;
class Array
{
	private:
		    int A[10];
		    int size=10;
		    int length=5;
	public:
		   Array()
		   {
            A[0] = 2;
            A[1] = 3;
            A[2] = 4;
            A[3] = 5;
            A[4] = 6;
		   }
		   void display()
		   {
		   	cout<<"\nElements Are:"<<endl;
		   	for(int i=0;i<length;i++)
		   	{
		   		cout<<A[i]<<" ";
		    }
		    cout<<endl;
		   }
		   void append(int x)
		   {
		   	if(length<size)
		   	{
		   		A[length++]=x;
			}
			else
			{
				cout<<"Array Is Full";
			}
		   }
		   void insert(int index, int x)
		   {
		   	if(index>=0 && index<=length)
		   	{
		   		for(int i=length;i>index;i--)
		   	{
		   		A[i]=A[i-1];
			}
			A[index]=x;
			length++;
			}
			else
			{
				cout<<"Invalid Index";
			}
		   }
};
int main()
{
	Array Arr1;
	Arr1.display();
	Arr1.append(10);
	Arr1.insert(1,12);
	Arr1.display();
	return 0;
}

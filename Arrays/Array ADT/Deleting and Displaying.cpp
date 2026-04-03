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
		   int Delete(int index)
		   {
		   	int x=0;
		   	if(index>=0 && index<length)
		   	{
		   		x=A[index];
		   	for(int i=index;i<length-1;i++)
		   	{
		   		A[i]=A[i+1];
			}
			length--;
			return x;
			   }
			   return -1;
		   }
};
int main()
{
	Array Arr1;
	Arr1.display();
	cout<<"\nDeleted Element :"<<Arr1.Delete(2)<<endl;
	
	Arr1.display();
	return 0;
}

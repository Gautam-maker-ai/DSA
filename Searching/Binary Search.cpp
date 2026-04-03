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
		   }
		   int Binary_search(int key)
		   {
		   	int l=0,h=length-1,mid;
		   	while(l<=h)
		   	{
		   		mid=(l+h)/2;
		   		if(key==A[mid])
		   		{
		   			return mid;
				}
				else if(key<A[mid])
				{
					h=mid-1;
				}
				else
				{
					l=mid+1;
				}
			}
			return -1;
		   }
};
int main()
{
	Array a1;
    cout<<"Enter Number of Elements:";
    cin>>a1.length;
    a1.size=10;
    cout<<"Enter "<<a1.length<<" elements in sorted order:";
    for(int i=0;i<a1.length;i++)
    {
    	cin>>a1.A[i];
	}
	int key;
	cout<<"Enter Key U want to Search:";
	cin>>key;
	
	int index = a1.Binary_search(key);
	if(index!=-1)
	{
		cout<<"Element found at:"<<index<<endl;
	}
	else
	{
		cout<<"Not Found";
	}
	return 0;
}

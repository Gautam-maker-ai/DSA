#include<iostream>
using namespace std;
class Array
{
	public:
		  int A[7];
		  int size;
		  int length;
		  void display()
		  {
		  	cout<<"Elements Are:";
		  	for(int i=0;i<length;i++)
		  	{
		  		cout<<A[i]<<" ";
			}
		  }
		  void swap(int &x,int &y)
		  {
		  	int temp;
		  	temp=x;
		  	x=y;
		  	y=temp;
		  }
		  int Linear_Search(int key)
		  {
		  	for(int i=0;i<length;i++)
		  	{
		  		if(key==A[i])
		  		{
		  			if(i>0)
		  			{
		  				swap(A[i],A[i-1]);
					}
		  			return i;
				}
			  }
			  return -1;
		  }
};
int main()
{
	Array a1;
	a1.A[0]=1;
	a1.A[1]=2;
	a1.A[2]=3;
	a1.A[3]=4;
	a1.A[4]=5;
	a1.A[5]=6;
	a1.A[6]=7;
	
	a1.size=7;
	a1.length=7;
	
	a1.display();
	cout<<endl;
	cout<<a1.Linear_Search(4)<<endl;
	a1.display();
	
	cout<<endl;
	
	cout<<a1.Linear_Search(4)<<endl;
	a1.display();
	
	cout<<endl;
	
	cout<<a1.Linear_Search(4)<<endl;
	a1.display();
	
	cout<<endl;
	
	cout<<a1.Linear_Search(4)<<endl;

	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int *p;
	p=new int[5];//Allocating memory in heap
	p[0]=10,p[1]=12,p[2]=14,p[3]=16,p[4]=18;
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	//when we allocate memory in heap we need to delete the memory also
	delete [ ]p;
}



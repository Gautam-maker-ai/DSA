#include<iostream>
using namespace std;
int main()
{
	int A[5]={10,20,25,30,35};//This array is created in stack
	int *p;
	p=A;
	for(int i=0;i<5;i++)
	{
		cout<<p[i]<<endl;
	}
	return 0;
}



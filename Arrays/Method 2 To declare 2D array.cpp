#include<iostream>
using namespace std;
int main()
{
	int *A[3];
	A[0]=new int[4];
	A[1]=new int[4];
	A[2]=new int[4];
	for(int i=0;i<3;i++)
	{
	for(int j=0;j<4;j++)
		{
			A[i][j]=i+j;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i = 0; i < 3; i++)
    {
        delete [] A[i];
    }

	return 0;
}

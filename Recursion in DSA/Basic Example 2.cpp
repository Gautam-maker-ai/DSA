// It is also known as Head recursion
//Head recursion->Means function pehle aata hai print baad me hota hai 
#include<iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		cout<<n<< " ";
	}
}
int main()
{
	int x=3;
	fun(x);
}

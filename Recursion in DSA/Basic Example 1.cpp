// It is also Known asTail recursion 
//Tail recursion->Means function baad me hai print pehle hota hai 
#include<iostream>
using namespace std;
void fun(int n)
{
	if(n>0)
	{
		cout<<n<< " ";
		fun(n-1);
	}
}
int main()
{
	int x=3;
	fun(x);
}

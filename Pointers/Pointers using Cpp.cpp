#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<a<<endl;//for value
	cout<<*p<<endl;//for value
	cout<<p<<endl;//for address
	cout<<&a;//for address
	return 0;
}

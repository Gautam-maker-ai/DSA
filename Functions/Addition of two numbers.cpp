#include<iostream>
using namespace std;
int add(int a,int b)//Prototype and Formal Parameteres
{
	int c;
	c=a+b;
	return c;
};
int main()
{
	int x,y,z;
	x=20;
	y=30;
	z=add(x,y);//Actual Parameteres
	cout<<z;
	return 0;
}

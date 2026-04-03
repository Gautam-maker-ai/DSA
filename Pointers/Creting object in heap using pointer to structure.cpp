#include<iostream>
#include<stdlib.h>
using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle *p;
	//p=(struct Rectangle*)malloc(sizeof(struct Rectangle)); Syntaxin C language
	p=new Rectangle;//Syntax Used in c++
	p->length=15;
	p->breadth=20;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
	return 0;
}

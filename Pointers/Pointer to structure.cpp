#include<iostream>
using namespace std;
struct Rectangle
{
	int length;
	int breadth;
};
int main()
{
	struct Rectangle r={5,6};
	struct Rectangle *p;
	p=&r;
	p->length=10;
	cout<<"Length is:"<<r.length<<endl;
	cout<<"Breadth is:"<<r.breadth<<endl;
	return 0;
}

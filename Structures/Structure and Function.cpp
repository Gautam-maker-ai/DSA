 #include<iostream>
using namespace std;
struct Rectangle{
	int length;
	int breadth;
};
void intialize(struct Rectangle* r, int l,int b)
{
	r->length=l;
	r->breadth=b;
	cout<<r->length;
}
int area(struct Rectangle r)
{
	cout<<r.length;
	return r.length*r.breadth;
}
void changeLength(struct Rectangle* r,int l)
{
	r->length=l;
}
int main()
{
	struct Rectangle r;
	intialize(&r,10,5);
	area(r);
	changeLength(&r,20);
	cout<<r.length;
}

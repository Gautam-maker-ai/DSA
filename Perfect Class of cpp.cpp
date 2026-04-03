#include<iostream>
using namespace std;
class Rectangle
{
	private:
		    int length;
		    int breadth;
	public:
		   Rectangle();
		   Rectangle(int l,int b);
		   int getLength();
		   int getBreadth();
		   void setLength(int l);
		   void setBreadth(int b);
		   int area();
		   int perimeter();
		   ~Rectangle();
};
Rectangle::Rectangle()
{
	cout<<"Rectangle Cosntructed"<<endl;
	length=0;
	breadth=0;
}
Rectangle::Rectangle(int l,int b)
{
	cout<<"Rectangle Cosntructed"<<endl;
	length=l;
	breadth=b;
}
int Rectangle::getLength()
{
	return length;
}
int Rectangle::getBreadth()
{
	return breadth;
}
void Rectangle::setLength(int l)
{
	if(l>0)
	{
		length=l;
	}
	else
	{
		cout<<"Length cannot be negative";
	}
}
void Rectangle::setBreadth(int b)
{
	if(b>0)
	{
		breadth=b;
	}
	else
	{
		cout<<"Breadth cannot be negative";
	}
}
int Rectangle::area()
{
	return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);	
}
Rectangle::~Rectangle()
{
	cout<<"Rectangle Destroyed";
}
int main()
{
	Rectangle r(2,3);
	cout<<r.area()<<endl;
	cout<<r.perimeter()<<endl;
	return 0;
}

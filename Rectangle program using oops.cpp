#include<iostream>
using namespace std;
class Rectangle
{
	public:
		   int length;
		   int breadth;
		   Rectangle(int l=0,int b=0)
		   {
		   	length=l;
		   	breadth=b;
		   }
		   int area()
		   {
		   	return length*breadth;
		   }
		   int perimeter()
		   {
		   	return 2*(length+breadth);
		   }
		   void display()
		   {
		   	cout<<"Area Is:"<<area()<<endl;
		   	cout<<"Perimeter Is:"<<perimeter()<<endl;
		   }
};
int main()
{
	Rectangle r(2,3);
	r.area();
	r.perimeter();
	r.display();
	return 0;
}

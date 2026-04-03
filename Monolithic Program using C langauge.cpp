#include<stdio.h>
using namespace std;
int main()
{
	int length=0,breadth=0;
	printf("\nEnter Length and Breadth:");
	scanf("%d %d",&length,&breadth);
	
	int area;
	area=length*breadth;
	int perimeter;
	perimeter=2*(length+breadth);
	
	printf("Area Is:%d\nPerimeter Is:%d",area,perimeter);
	return 0;
}

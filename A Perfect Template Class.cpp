#include<iostream>
using namespace std;
template<class T>
class Arithmetic
{
	private:
		    T a;
		    T b;
	public:
		   Arithmetic(T a, T b);
		   T add();
		   T sub();
};
template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
{
	this->a=a;
	this->b=b;
}
template<class T>
T Arithmetic<T>::add()
{
	T c;
	c=a+b;
	return c;
}
template<class T>
T Arithmetic<T>::sub()
{
	T c;
	c=a-b;
	return c;
}
int main()
{
	Arithmetic<int> ar(2,3);//For Integer
	cout<<ar.add()<<endl;
	cout<<ar.sub()<<endl;
	
	Arithmetic<float> ar1(2.3,3.2);//For Float
	cout<<ar1.add()<<endl;
	cout<<ar1.sub()<<endl;
	
	Arithmetic<char> ar2('A','B');//For Character
	cout<<(int)ar2.add()<<endl;
	cout<<(int)ar2.sub()<<endl;
	return 0;
}

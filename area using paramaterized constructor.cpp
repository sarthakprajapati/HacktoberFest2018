#include<iostream>
using namespace std;
class area
{
	int a,b;
	public:
	void triangle()
	{
		cout<<"area of triangle="<<0.5*a*b<<endl;
	}
	void rectangle()
	{
		cout<<"area of rectangle=="<<a*b<<endl;
	
	}
	void circle()
	{
		cout<<"area of circle ="<<3.14*a*a<<endl;
		
	}
	area(int x,int y)
	{
		a=x;
		b=y;
	
	}
	area(int x)
	{
		a=x;
	}
};

int main()
{
	area obj1(3,4);
	area obj2=area(5,6);
	area obj3(4);
	obj1.triangle();
	obj2.rectangle();
	obj3.circle();
	return 0;
	
}

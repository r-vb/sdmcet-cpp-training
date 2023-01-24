#include<iostream>
using namespace std;
class shape
{
	protected:
		int width, height;
	public:
		shape(){width=height=0;}
		shape(int a,int b)
		{
			width=a;
			height=b;
		}
	virtual void area(){}
};
class rectangle:public shape
{
	int r;
	public:
		rectangle(){r=0;}
		rectangle(int a,int b):shape(a,b)
		{}
	void area()
	{
		r=width*height;
		cout<<"Area of rectangle: "<<r<<endl;
	}
};
class triangle:public shape{
	float t;
	public:
		triangle(){t=0;}
		triangle(int a, int b):shape(a,b)
		{}
		void area()
		{
			t=0.5*width*height;
			cout<<"Area of triangle: "<<t<<endl;
		}
};
void calculate_area(shape *p)
{
	p->area();
}
int main()
{
	rectangle R(10,20);
	triangle T(100,200);
	calculate_area(&R);
	calculate_area(&T);
return 0;
}
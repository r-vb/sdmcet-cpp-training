//Write a C++ program to determine area of circle, triangle and rectangle -- using function overloading.

#include<iostream>
using namespace std;

void area(int);
void area(int,int);
void area(float,float);

int main()
{
		int rad=3, base=3, height=4;
		float side1=7.76, side2=4.7342;
	area(rad);
	area(base,height);
	area(side1,side2);
return 0;
}

void area(int radius)
{
	cout<<"Area of circle = "<<3.14*radius*radius<<endl;
	return;
}

void area(int x,int y)
{
	cout<<"Area of triangle = "<<0.5*x*y<<endl;
	return;
}

void area(float a,float b)
{
	cout<<"Area of rectangle = "<<a*b<<endl;
	return;
}
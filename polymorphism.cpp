#include<iostream>
using namespace std;

void fnAdd(int ,int);
void fnAdd(float ,float);
void fnAdd(float ,int);
void fnAdd(int ,float);
void fnAdd(double ,double);
void fnAdd(double ,int);
void fnAdd(int ,double);

int main()
{
		int a=10, b=20;
		float x=10.5, y=20.5;
		double p=30.12345678, q=40.12345678;
	fnAdd(a,b);		//candidate functions
	fnAdd(x,y);
	fnAdd(p,q);
	fnAdd(a,y);
	fnAdd(x,b);
	fnAdd(p,a);
	fnAdd(b,q);
return 0;
}

void fnAdd(int x, int y)
{
	cout<<"Sum = "<<x+y<<endl;
	return;
}

void fnAdd(float x, float y)
{
        cout<<"Sum = "<<x+y<<endl;
        return;
}

void fnAdd(float x, int y)
{
        cout<<"Sum = "<<x+y<<endl;
        return;
}

void fnAdd(int x, float y)
{
        cout<<"Sum = "<<x+y<<endl;
        return;
}

void fnAdd(double x, double y)
{
        cout<<"Sum = "<<x+y<<endl;
        return;
}

void fnAdd(double x, int y)
{
        cout<<"Sum = "<<x+y<<endl;
        return;
}

void fnAdd(int x, double y)
{
        cout<<"Sum = "<<x+y<<endl;
        return;
}
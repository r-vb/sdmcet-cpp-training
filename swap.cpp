//generic fns.
#include<iostream>
using namespace std;
template<class T>
void swap1(T &a,T &b)
{
	T temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x=10,y=20;
	float a=100.5,b=200.2;
	cout<<"Before swapping\n";
	cout<<"x="<<x<<endl<<"Y="<<y<<endl;
	swap(x,y);
	cout<<"After swapping\n";
	cout<<"x="<<x<<endl<<"Y="<<y<<endl;
	cout<<"Before swapping\n";
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
return 0;
}
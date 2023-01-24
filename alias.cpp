#include<iostream>
using namespace std;

int main()
{
		int x = 300;
		float y = 600.999;
	int &xRef = x;
	cout<<"x = "<<x<<"\n"<<"y = "<<y<<endl;
	cout<<"x = "<<x<<"\n"<<"y = "<<y<<endl;
	xRef++;
	cout<<"x = "<<x<<"\n"<<"y = "<<y<<endl;
return 0;
}
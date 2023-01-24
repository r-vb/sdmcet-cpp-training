// Write a C++ prog. which has the class called DISTANCE parameter(int [in-feet]) then do the following operatioms:
// 1. initialization of 2 objects
// 2. addition of two distances
// 3. subtraction of 2 distances
// 4. display: initialization, addition and subtraction.

#include<iostream>
using namespace std;
class DISTAN
{
	private: int inch;
		 int feet;


	public:
		 void initialize();
		 void addition(DISTAN,DISTAN);
		 void subtraction(DISTAN,DISTAN);
		 void display();
};

void DISTAN::initialize()
{
	cout<<"Enter distance value in inch: ";
	cin>>inch;
	cout<<"Enter distance value in feet: ";
	cin>>feet;
}

void DISTAN::addition(DISTAN d1, DISTAN d2)
{
	inch = d1.inch + d2.inch;
	feet = d1.feet + d2.feet;
	return;
}

void DISTAN::subtraction(DISTAN d1, DISTAN d2)
{
	inch = d1.inch - d2.inch;
	feet = d1.feet - d2.feet;
	return;
}

void DISTAN::display()
{
	if(inch<12)
		cout<<feet<<"."<<inch<<endl;
	else
		cout<<feet+1<<"."<<inch-12<<endl;
	return;
}

int main()
{
		DISTAN d1,d2,d3,d4;
	cout<<"Enter d1 values:--\n";
	d1.initialize();
	cout<<"Enter d2 values:--\n";
	d2.initialize();
	d3.addition(d1,d2);
	d3.display();
	d4.subtraction(d1,d2);
	d4.display();
return 0;
}
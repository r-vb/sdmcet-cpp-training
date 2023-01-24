#include<iostream>
using namespace std;
class COMPLEX
{
	private: int real;		//they are locally global
		 int img;
	public:
/*fn.prototypes*/void initialize();
		 void add(COMPLEX,COMPLEX);
		 void subtract(COMPLEX,COMPLEX);
		 void display();
};

void COMPLEX::initialize()	// :: is scope resolution operator
{
	cout<<"Enter the real part: ";
	cin>>real;
	cout<<"Enter the imaginary part: ";
	cin>>img;
}

void COMPLEX::add(COMPLEX c1,COMPLEX c2)
{
	real = c1.real + c2.real;
	img = c1.img + c2.img;
	return;
}

void COMPLEX::subtract(COMPLEX c1,COMPLEX c2)
{
	real = c1.real - c2.real;
	img = c1.img - c2.img;
	return;
}

void COMPLEX::display()
{
	if(img>=0)
		cout<<real<<"+i"<<img<<endl;
	else
		cout<<real<<"-i"<<img<<endl;
}

int main()
{
	COMPLEX c1, c2, c3, c4;
	system("clear");
	cout<<"Enter the first complex number\n";
	c1.initialize();
	cout<<"Enter the second complex number\n";
	c2.initialize();
	c3.add(c1,c2);
	c4.subtract(c1,c2);
	c1.display();
	c2.display();
	c3.display();
	c4.display();
return 0;
}
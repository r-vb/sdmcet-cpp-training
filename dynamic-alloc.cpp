//dynamic mem alloc using constructor

#include<iostream>
using namespace std;

class student
{
	int roll_no;
	char *name;

	public:
		static int i;
		student()
		{
			cout<<"Enter the roll number: ";
			cin>>roll_no;
			name = new char[30];
			cout<<"Enter the name: ";
			cin>>name;
			i++;
		}
		student(int rn,char *n)
		{
			this->roll_no = rn;
			this->name = new char[30];
		//	strcpy(this->name,n);
			i++;
		}
		void display()
		{
			cout<<"Student details are\n";
			cout<<"Roll No: "<<roll_no<<endl;
			cout<<"Name: "<<name<<endl;
		}
		~student()
		{
			cout<<"Object "<<i--<<"destroyed\n";
			delete [] this->name;
			name = NULL;
		}
};
int student ::i=0;
int main()
{
	char name1[]="Rahul", name2[]="Shreedhar";
	student s1,s2(2,name1),s3(11,name2);
	s1.display();
	s2.display();
	s3.display();
return 0;
}
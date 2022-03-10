#include<iostream>
using namespace std;

class Student
{
	public:
		string name;
		int age;
		double g1,g2;
		
		
	Student()
	{
		name="NON";
		age=-1;
		g1=0;
		g2=0;
		display();
	}
	Student(string n,int a,double x,double y)
	{
		name=n;
		age=a;
		g1=x;
		g2=y;
		display();
	}
void display()
{
	cout<<"NAME : "<<name<<"\nAGE : "<<age<<"\nGRADES : "<<g1<<",   "<<g2<<endl;
}

};


main()
{
	Student s1;
	Student s2("ALI",20,33.5,66.8);
	Student s3("TIA",19,66.9,55.4);
	
}

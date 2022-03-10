#include<iostream>
using namespace std;

class  Student
{
	
	public: 
	string name;
	int age;
	double g1,g2;
	
	Student(){
		name="Non";
		age=43;
		g1=34.4;
		g2=45;
		display();
	}
	
	
		Student(string n,int a,double x, double y){
		name=n;
		age=a;
		g1=x;
		g2=y;
		display();
	}
	
	
	void display(){
		cout<<"Name: "<<name<<" Age: "<<age<<" Grades : "<<g1<<" "<<g2<<endl;
	}
};


main(){
	
	Student s1;
	Student s2("Ali",20,56.4,34.5);
	Student s3("Tia",21,53.4,35);
}

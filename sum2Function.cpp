#include<iostream>
using namespace std;

int sum(){
	int a, b , s;
	cout<<"Enter 2 integers: ";
	cin>>a>>b;
	s=a+b;
	return(s);
}
main()
{
	int x;
x=sum();
	cout<<"The sum of the 2 integers is= "<<x;
}

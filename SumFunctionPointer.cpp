#include<iostream>
using namespace std;

void sum(int a, int b, int*s)
{
	*s=a+b;
}

main(){
	
	int a,b,s;
	
	cout<<"Enter the first number: ";
	cin>>a;
	
	cout<<"Enter the second number: ";
	cin>>b;
	
	sum(a,b,&s);
	cout<<"The sum of the 2 numbers is :"<<s;
}

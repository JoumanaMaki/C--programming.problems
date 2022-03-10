#include<iostream>
using namespace std;


void function1()//DECLARATION FUNction return-type name(argument1,...,)
{
	
	int a,b,s;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter a number: ";
	cin>>b;
	
	s=a+b;
	cout<<"The Ans = "<<s;
	
}
main(){
	
function1();//calling function1
}

#include<iostream>
using namespace std;

int power(int a, int b){
	if (b==0)
	{ return 1;
	}
	else 
	{
	return a *power(a,b-1);
}
	
}
main()
{
int a,b,p;

cout<<"Enter the number: "<<endl;
cin>>a;

cout<<"Enter the power: "<<endl;
cin>>b;

p=power(a, b);

cout<<a<<" to the power of  "<< b<<" is : "<<p;
	
}

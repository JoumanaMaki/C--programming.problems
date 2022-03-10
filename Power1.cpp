#include<iostream>
using namespace std;

int power(int a, int b){
	int i,p=1;
	for(i=1; i<=b;i++)
	{
	p=p*a;
}
return p;	
}
main()
{
int a,b,p;

cout<<"Enter the number: "<<endl;
cin>>a;

cout<<"Enter the power: "<<endl;
cin>>b;

p=power(a, b);

cout<<a<<" to the power of "<< b<<" is : "<<p;
	
}

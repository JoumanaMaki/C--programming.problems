//Write a C++ program that defines :
//Defines a function  int fact(int n) that takes a number n and calculates its factorial .
//Defines a function  float sum(int n) that takes a number n and calculates the following sum:
//S=1+1/2!+1/3!+?+  1/n!
//In the main, ask the user to enter a positive number, and displays the sum defined in the above equation. 
#include<iostream>
using namespace std;
int fact(int n)
{

int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;	
}
return f;	
}
double sum(int n)//4
{
	int i;
	double s=0;
	for(i=1;i<=n;i++)//i=1<=4true-->s=0+1/1-->i=2<=4-->s=1+1/2!
	{
		s=s+1.0/fact(i);
	}
	
	return(s);
}
main()
{
	int n,x;
	do{
	cout<<"Plz Enter a positive number ";
	cin>>n;
	}while(n<=0); 
    double s;
    s=sum(n);//4
	cout<<"Sum = "<<s;
	
}

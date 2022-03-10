#include<iostream>
using namespace std;

int function1(int, int);//fina bs data type lal arguments -- prototype

main(){
	int a,b,p;
	cout<<"Enter a number: ";
	cin>>a;
	cout<<"Enter a number: ";
	cin>>b;
p=function1(a,b);//calling function1
cout<<"The Ans = "<<p;
}

int function1(int a,int b)//DECLARATION FUNction return-type name(argument1,...,)
{
int s;//bs 3aref bl () ma b3arefa bl body lal function
	s=a+b;
	return s;	
	
}

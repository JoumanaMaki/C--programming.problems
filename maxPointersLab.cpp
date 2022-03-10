#include<iostream>
using namespace std;
main(){
	int num1,num2,num3,max;
	int*p1,*p2,*p3;
	p1=&num1;
	p2=&num2;
	p3=&num3;
	
	
	cout<<"Enter the first number: ";
	cin>>num1;
	
	cout<<"Enter the second number: ";
	cin>>num2;
	
	cout<<"Enter the third number: ";
	cin>>num3;
	
	
	if(*p1>*p2 && *p1>*p3)
	{ max=*p1;
	cout<<"The maximum value is: "<<max;
}
else if (*p2>*p1 && *p2>*p3)
	{ max=*p2;
	cout<<"The maximum value is: "<<max;
}

else 
	{ max=*p3;
	cout<<"The maximum value is: "<<max;
}}







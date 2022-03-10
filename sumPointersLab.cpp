#include<iostream>
using namespace std;
main(){
	int num1,num2,sum;
	int*p1,*p2;
	p1=&num1;
	p2=&num2;
	
	
	cout<<"Enter the first number: ";
	cin>>num1;
	
	cout<<"Enter the second number: ";
	cin>>num2;
	
	sum=*p1 + *p2;
	
	cout<<"The sum of the two numbers is: "<<sum<<endl;
	
}

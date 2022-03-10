#include<iostream>
using namespace std;
 
 int sum(int a, int b){
 	
 	int s;
 	s=a+b;
 	return(s);
 	
 }
 main(){
 	int x;
 	int a,b;
 	cout<<"Enter 2 integers: ";
 	cin>>a>>b;
 	x=sum(a,b);
 	cout<<"The sum is: "<<x;
 	
 }

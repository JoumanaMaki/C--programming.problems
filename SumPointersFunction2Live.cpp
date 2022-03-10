#include<iostream>
using namespace std;
void sum(int,int,int*);

   main(){
   	
   	int a, b,s;
   	
   	int*p;
   	p=&s;
   		cout<<"Enter a number :";
   		cin>>a;
   		
   		cout<<"Enter a number : ";
   		cin>>b;
   		
   		sum(a,b,p);
   		cout<<"tHE ANS ="<<s;
   }
   
   void sum(int a, int b , int*x)
   {
   	
   	*x=a+b;
   }


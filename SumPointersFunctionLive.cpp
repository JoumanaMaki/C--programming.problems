#include<iostream>
using namespace std;
void sum(int,int,int*);

   main(){
   	
   	int a, b,s;
   	
 
   		cout<<"Enter a number :";
   		cin>>a;
   		
   		cout<<"Enter a number : ";
   		cin>>b;
   		
   		sum(a,b,&s);
   		cout<<"tHE ANS ="<<s;
   }
   
   void sum(int a, int b , int*x)
   {
   	
   	*x=a+b;
   }


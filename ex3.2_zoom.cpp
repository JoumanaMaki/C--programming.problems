#include<iostream>
using namespace std;
void f1(int n) 
{
if(n<=0)
{return;}
else
{
f1(n-1);


cout<<n<<"   ";
}}


main()
{
int n;
cout<<"Enter N ";
cin>>n; 
f1(n);	
}


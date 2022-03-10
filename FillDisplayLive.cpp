#include<iostream>
using namespace std;

void fill(int a[])
{
int i;
   for(i=0;i<5;i++){
   	cout<<"Enter a["<<i<<"]";
   	cin>>a[i];
   }
}
   void display(int a[])
{
int i;
   for(i=0;i<5;i++){
   	cout<<a[i]<<"\t";
   }
}
   main(){
   	
   	int a[5];
   	fill(a);
   	display(a);
   }


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

void count(int a[])
{
	int i,p=0,n=0;
	
	for(i=0;i<5;i++){
   	if(a[i]>=0){
	  p++; }
   	if(a[i]<0){
	 n++; }
   }
cout<<endl<<"pos = "<<p;
cout<<endl<<"neg = "<<n;
}
   main(){
   	
   	int a[5],ans;
   	fill(a);
   	display(a);
   	count(a);//count for + nb
   	
   }


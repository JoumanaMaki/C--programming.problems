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

int count(int a[])
{
	int i,c=0;
	
	for(i=0;i<5;i++){
   	if(a[i]>=0){
	  c++; }
   	
   }
	return c;
}
   main(){
   	
   	int a[5],ans;
   	fill(a);
   	display(a);
   	ans=count(a);//count for + nb
   	cout<<endl<<"number of positive = "<<ans;
   }


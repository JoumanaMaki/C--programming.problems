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

void count(int a[] , int*pp, int*pn)
{
	int i,p=0,n=0;
	
	for(i=0;i<5;i++){
   	if(a[i]>=0){
	  *pp=*pp+1 ;}
   	if(a[i]<0){
	 *pn=*pn+1; }
   }

}
   main(){
   	
   	int a[5],ans,p=0,n=0,*pp,*pn;
   	pp=&p;
   	pn=&n;
   	
   	fill(a);
   	display(a);
   	count(a,pp,pn);//count for + nb
   	cout<<endl<<"pos = "<<p;
    cout<<endl<<"neg = "<<n;
   }


#include<iostream>
using namespace std;
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Enter a number ";
		cin>>a[i];//a[0]a[1]a[2]a[3]a[4]......a[n]
	}
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		
		cout<<a[i]<<"  ";//a[0]a[1]a[2]a[3]a[4]......a[n]
	}
}
main()
{
	int a[10];
	int n;
	do{
		cout<<"Enter the size of the array less than 10 integer ";
	    cin>>n;
	 }while(n>10);	
	read(a,n);
	display(a,n);
}

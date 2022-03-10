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
int count(int a[],int n)
{
 int c=0,i;
 for(i=0;i<n;i++)
 {
  if(a[i]>=12)
   {
    c++;	
   }	
 } 
return c;	
}
bool search(int a[],int n,int x)
{
int i;
for(i=0;i<n;i++)
 {
   if(a[i]==x)
    {
     return true;
    }
 }
 return false;	
}

main()
{
	int a[10],nb;
	int n;
	do
	{
	cout<<"Enter the size of the array less than 10 integer ";
	cin>>n;
	}while(n>10);	
	read(a,n);
	display(a,n);
	int c=count(a,n);
	cout<<"\nNumbers that are >=12 = "<<c;
	cout<<"Enter a number to search inside the array";
	cin>>nb;
	bool ans;
	ans =search(a,n,nb);//calling function sending array size of array number to be searched
	if(ans==true)
	{
		cout<<"Number exist";
	}
	else
	{
		cout<<"Number not exist";
	}
	
}

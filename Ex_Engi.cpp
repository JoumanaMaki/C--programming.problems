#include<iostream>
using namespace std;
int  funct(int x,int n)//1,4   2,4 
{

if(x>=n)
{
	cout<<n;
}
else
{	cout<<x<<" ";//   1   2
    x++;         // x=2  x=3
	funct(x,n);  // 2,4
	
}	
}
main()
{	
	int n;
	cout<<"ENTER an integer ";
	cin>>n;
	funct(1,n);	//funct(1,4)
}

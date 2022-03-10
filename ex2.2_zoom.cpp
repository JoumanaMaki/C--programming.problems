#include<iostream>
using namespace std;
int f1(int n) {


if(n<=0)
	{
	return 1;
}
else
{
	
	f1(n-1);
	cout<<"LOOP ";
}
}
main()
{
int n,p;
cout<<"Enter N ";
cin>>n; 
p=f1(n);	

}



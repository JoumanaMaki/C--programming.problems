#include<iostream>
using namespace std;
int f1(int n) {


if(n<=0)
	{
	return 1;
}
else
{
	cout<<"LOOP ";
	f1(n-1);
}
}
main()
{
int n,p;
cout<<"Enter N ";
cin>>n; 
p=f1(n);	

}



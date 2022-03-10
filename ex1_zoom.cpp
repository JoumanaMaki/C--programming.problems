#include<iostream>
using namespace std;

f1(int n)
{
	return n*n;
}
f2(int n)
{
	return n*n*n;
}
f3(int n)
{
	return n*n*n*n;
}
f4(int n)
{
	return f1(n)+f2(n)+f3(n);
}

main()
{
int ans,n;
cout<<"enter a number";
cin>>n;
ans=f4(n);
cout<<"ANS =" <<ans;	
}


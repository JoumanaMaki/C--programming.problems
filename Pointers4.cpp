#include<iostream>
using namespace std;

main()
{
	int i,k;
	int*p;
	i=42;
	k=i;
	p=&i;
	cout<<p<<endl;
	*p=75;
	cout<<i;
}

 
#include<iostream>
using namespace std;
bool prime(int n)
{
	int i;
	bool f=true;
	for(i=2;i<=n/2;i++)//15
	{
		if(n%i==0)
		{
		f=false;
		break;	
		}
	}
return f;	
}
main()
{
	int n;
	bool ans;
	do{
	cout<<"Plz Enter a positive number";
	cin>>n;
	}while(n<=0); 
	ans=prime(n);
	if(ans==true)
	{
	cout<<"Prime number";
	}
	else
	{
	cout<<"NOT Prime";
	}	
}

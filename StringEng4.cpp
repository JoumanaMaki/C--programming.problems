//write a program to search for a certaion character in a string
#include<cstring>
#include<iostream>
using namespace std;
main()
{
	
	
	char s[55],x;
	int i,c=0;
	cout<<"Enter your name ";
	cin.getline(s,55);
	
	cout<<"Enter a charcter for searching ";
	cin>>x;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==x)
		{
			c++;
		}
	}
	
if(c==0)
{
	cout<<x<<" not found in "<<s;
}
else
{
	cout<<x<<" is found "<<c<<" times"<<" in "<<s;
}
}

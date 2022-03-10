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
	

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u')
		{
			c++;
		}
	}
	

{
	cout<<x<<"Number of vowel letters in "<<s <<" = " <<c<<" times";
}
}

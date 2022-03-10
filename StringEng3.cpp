//write a program that ask user to enter a string
//then display this string in reverse order
#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char s[55];
	int l,i;
	cout<<"Enter your name ";
	cin.getline(s,55);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		cout<<s[i]<<" ";
	}
	

}

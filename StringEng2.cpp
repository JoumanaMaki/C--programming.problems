//write a program that ask the user to enter string
//then display the numbers of chars in that string
// we have to use strlen function


#include<iostream>
#include<cstring>
using namespace std;
main()
{
	char s[55];
	int l;
	cout<<"Enter your name ";
	cin.getline(s,55);
	
	
	l=strlen(s);
	cout<<"Number of characters in  "<<s<<" = "<<l;
}

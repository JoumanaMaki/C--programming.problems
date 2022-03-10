#include<iostream>
using namespace std;

void displayString( char str[]);

main(){
	
	char str[50];
	cout<<"Enter string : ";
	cin>>str;
	displayString(str);
	
}

void displayString( char str[])
{  cout<<"String Output: ";
cout<<str;
}

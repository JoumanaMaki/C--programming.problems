#include<iostream>
#include<cstring>
using namespace std;
void display(char s1[])
{
	int i;
cout<<"your name :: "<<s1<<endl;
for(i=0;s1[i]!='\0';i++)
   {
   	cout<<s1[i]<<"     ";
   }	
}
void length(char s1[])
{
	int l;
	l=strlen(s1);
	cout<<endl<<"size of string = "<<l;
}

main()
{
   char s1[22];
   cout<<"enter ur name ";
   cin>>s1;
   display(s1);
   length(s1);
}

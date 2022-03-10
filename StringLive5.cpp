//enter first name, last name then make compare if result negtive display first name before last else 
//display last befor first name

#include<iostream>
#include<cstring>
using namespace std;


main()
{
   char s1[22],s2[22];
   cout<<"enter ur first name ";
   cin>>s1;
   
   cout<<"enter ur last name ";
   cin>>s2;
   
   int c;
   
   c=strcmp(s1,s2);
   if(c<0)
   {
   	cout<<s1<<"   "<<s2;   	
   }
   else if(c>0)
   {
   	cout<<s2<<"   "<<s1;
   }
   
   else
   {
   	cout<<"they are equal";
   }
   
 
   
}

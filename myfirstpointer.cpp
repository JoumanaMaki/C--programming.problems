#include<iostream>
using namespace std;

main()
{
 int value1=5,value2=15;
 int *mypointer;
 mypointer=&value1;
 cout<<mypointer<<endl;
 *mypointer=10;
 mypointer=&value2;
 cout<<mypointer<<endl;
 *mypointer=20;
 cout<<"value1=="<<value1<<"/value2=="<<value2<<endl;
 
/* int a= 25;
int *p;
p=&a;
*p++;
cout <<p;*/



}
 


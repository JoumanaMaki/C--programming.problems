#include<iostream>
using namespace std;
int even(int);

main(){
int x, remainder;

cout<<"Enter a number: ";
cin>>x;

remainder=even(x);

if(remainder==0)
cout<<x<<" is even";
else
cout<<x<<" is Odd";
	
}


int even(int x)
{
	
	
if(x%2==0)
return 0;
else
return -1;


}

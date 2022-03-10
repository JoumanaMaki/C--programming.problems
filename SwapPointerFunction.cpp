#include<iostream>
using namespace std;


void swap(int &x,int &y)
{
	
cout<<x<<" "<<y<<endl;


int temp =x;
x=y;
y=temp;

cout<<x<<" "<<y<<endl;
}


main(){
	
	
	int a=9;
	int b=19;
	
	swap(a,b);
}

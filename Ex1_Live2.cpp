#include<iostream>
using namespace std;
class Time
{
private:
int hour;
int minute;
int second;	

public:
	Time(int h,int m,int s)
	{
	 hour=h;
	 minute=m;
	 second=s;	
	}
void display()
{
	cout<<"TIME : "<<hour<<":"<<minute<<":"<<second<<endl;
}
};

main()
{

Time t1(10,25,44);	
t1.display();
}

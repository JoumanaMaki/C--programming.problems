#include<iostream>
#include<iomanip>
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
	
void sethour(int h)
{
	if(h>=1&&h<=12)
	{
		hour=h;
	}
	
}
void setmin(int m)
{
	if(m>=0&&m<60)
   {
	minute=m;
   }
	
}
void setsec(int s)
{
	if(s>=0&&s<60)
	{
		second=s;
	}
	
}
int gethour()
{
	return hour;
}

int getmin()
{
	return minute;
}

int getsec()
{
	return second;
}

void display()
{
	cout<<setfill('0');
	cout<<"TIME : "<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second<<endl;
}
};

main()
{

Time t1(10,00,00);	
t1.display();
int a,b,c;
cout<<"Enter hh//mm//ss\n";
cin>>a>>b>>c;
t1.sethour(a);
t1.setmin(b);
t1.setsec(c);
t1.display();

cout<<"HOUR = "<<t1.gethour()<<endl;
cout<<"MINUTE = "<<t1.getmin()<<endl;
cout<<"SECOND = "<<t1.getsec()<<endl;



}



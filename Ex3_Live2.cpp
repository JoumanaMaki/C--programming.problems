
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
	Time ()
	{
		hour=0;
		minute=0;
		second=0;
	}
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
void difference(Time t1,Time t2)
{
Time td;
int hh,mm,ss;
ss=t2.getsec()-t1.getsec();
mm=t2.getmin()-t1.getmin();
hh=t2.gethour()-t1.gethour();
if(ss<0)
{
	mm=mm-1;
	ss=ss+60;
}
if(mm<0)	
{
hh=hh-1;
mm=mm+60;	
}
td.sethour(hh);
td.setmin(mm);
td.setsec(ss);


td.display();
}






main()
{
int a,b,c;
Time ts;
cout<<"Enter Start time hh--mm--s\n";
cin>>a>>b>>c;
ts.sethour(a);
ts.setmin(b);
ts.setsec(c);
ts.display();
Time te;
cout<<"Enter Finish time hh--mm--s\n";
cin>>a>>b>>c;
te.sethour(a);
te.setmin(b);
te.setsec(c);
te.display();

difference(ts,te);
}


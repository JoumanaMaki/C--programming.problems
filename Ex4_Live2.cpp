#include<iostream>
using namespace std;

class Rectangle
{
	int l;
	int w;
	public:
	Rectangle()
	{
		l=0;
		w=0;
		cout<<"Constructor has been called"<<endl;
	}
	
	void setsides(int a,int b)
	{
		l=a;
		w=b;
		cout<<"SET SIDES has been called"<<endl;
	}
	
	int getarea()
	{
	int AREA;
	AREA=l*w;
	return AREA;	
	}	
	~Rectangle()
	{
		cout<<"DESTRUCTOR WAS CALLED"<<endl;
	}

};
main()
{
Rectangle r;
r.setsides(5,8)	;
int ans=r.getarea();
cout<<"area= "<<ans<<endl;
}

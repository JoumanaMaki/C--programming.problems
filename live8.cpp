#include<iostream>
using namespace std;


class Rectangle{
	int l;
	int w;
	
	public:
		Rectangle(){
			l=0;
			w=0;
			cout<<" constuctor has been called."<<endl;
		}
		
		void setsides(int a, int b){
			l=a;
			w=b;
			cout<<"set sides has been called"<<endl;
		}
		int getarea(){
			
			int area;
			area=l*w;
			return area;
		}
		
		~Rectangle(){
			cout<<" Destructor has been called"<<endl;
		}
		
		
};

main(){
	Rectangle r;
	r.setsides(8,5);
	int ans;
	ans=r.getarea();
	cout<<" area is : "<<ans<<endl;
}

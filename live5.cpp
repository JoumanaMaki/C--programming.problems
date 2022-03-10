#include<iostream>
using namespace std;
class Time{
	
	
	int hour;
	int minute;
	int second;
	
	public: 
	   
	   Time(int h, int m , int s){
	   	hour=h;
	   	minute=m;
	   	second=s;
	   }
	   
	  void display(){
	  	cout<<"Time : "<<hour<<" minute: "<<minute<<" second: "<<second<<endl;
	  } 
	
};

main(){
	Time t1(10,35,44);
	t1.display();
	
	
}

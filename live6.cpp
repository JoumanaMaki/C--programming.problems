#include<iostream>
#include<iomanip>
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
	  	
	  	cout<<setfill('0');
	  	cout<<"Time : "<<setw(2)<<hour<<" minute: "<<setw(2)<<minute<<" second: "<<setw(2)<<second<<endl;
	  } 
	//set functions
	   void sethour(int h){
	   	
	   	 if(h>=1&&h<=12){
	   	hour=h;}
	     }
	     
	     
	       void setminute(int m){
	       	
	       	if(m>=0&&m<60){
	   	minute=m;}
	     }
	     
	     
	         void setsecond(int s){
	         	
	         	if(s>=0&&s<60){
	   	second=s;}
	     }
	     
	     // get function
	     
	     int gethour( ){
	     	return hour;
		 }
	       int getminute( ){
	     	return minute;
		 }
	     
	       int getsecond( ){
	     	return second;
		 }
	     
	     ~Time(){
	     	cout<<"\nconstructor is called" ; 
		 
		 }
	     
	     
	     
};

main(){
	Time t1(10,00,00);
	t1.display();
	
	
	int a,b,c;
	
	cout<<"enter hh/mm/ss: ";
	cin>>a>>b>>c;
	
	
	t1.sethour(a);
	t1.setminute(b);
	t1.setsecond(c);
//	t1.display();

	
	cout<<" Hour: "<<t1.gethour()<< " Minute: "<<t1.getminute()<<" Second: "<<t1.getsecond();
}

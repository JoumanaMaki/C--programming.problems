#include<iostream>
#include<iomanip>
using namespace std;
class Time{
	
	
	int hour;
	int minute;
	int second;
	
	public: 
	
	 
	   Time(){
	   	hour=0;
	   	minute=0;
	   	second=0;
	   }
	   
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
		 
		 
	
	
	     
	     
	     
};

	void difference(Time t1, Time t2){
		
		Time td;
		 	int hh,mm,ss;
		 	
		ss=t2.getsecond()-t1.getsecond();
		 	mm=t2.getminute()-t1.getminute();
		 	hh=t2.gethour()-t1.gethour();
		 	
		 	if(ss<0){
		 		mm=mm-1;
		 		ss=ss+60;
			 }
			 	
		 	if(mm<0){
		 		hh=hh-1;
		 		mm=mm+60;
			 }
			 
			 td.sethour(hh);
			 td.setminute(mm);
			 td.setsecond(ss);
			 
			 td.display();
			 
		 }
		 
		 

main(){
	
	int a,b,c;
	
	Time ts;
		cout<<"enter Start time hh-mm-ss : ";
	cin>>a>>b>>c;
	
	
	ts.sethour(a);
	ts.setminute(b);
	ts.setsecond(c);
	ts.display();
	
		
	Time te;
		cout<<"enter finish time hh-mm-ss : ";
	cin>>a>>b>>c;
	
	
	te.sethour(a);
	te.setminute(b);
	te.setsecond(c);
	te.display();
	
	
	difference(ts,te);
}



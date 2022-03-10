#include<iostream>
using namespace std;


class Birthday{
	
	public: 
	  int dd;
	  int mm;
	  int yy;
	  
	  void Fill(int d, int n, int y){
	  	
	  	dd=d;
	  	mm=n;
	  	yy=y;
	  	display();
	  }
	  
	  void display(){
	  	
	  	cout<<endl<<" day:  "<<dd<<" month: "<<mm<<" year: "<<yy;
	  }
};

main(){
	Birthday b1;
	b1.Fill(2,3,2003);
	b1.display();
}

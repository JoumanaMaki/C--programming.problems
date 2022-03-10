#include<iostream>
using namespace std;


class Birthday{
	
	public: 
	  int dd;
	  int mm;
	  int yy;
	  

	  Birthday(){
	  	dd=7;
	  	mm=2;
	  	yy=2003;
	  	display();
	  }
	  
	  	  Birthday(int d, int m, int y){
	  	dd=d;
	  	mm=m;
	  	yy=y;
	  	display();
	  }
	  
	  
	  void display(){
	  	
	  	cout<<endl<<" day:  "<<dd<<" month: "<<mm<<" year: "<<yy;
	  }

};

main(){
	Birthday b1;
	
	int d, m, y;
	
	cout<<endl<<" enter the birthdate: ";
	cin>>d>>m>>y;
Birthday b2(d,m,y);
}

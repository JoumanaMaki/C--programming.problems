#include<iostream>
using namespace std;
class Birthday
{
public:	
   int dd;
   int mm;
   int yy;
   
void fill(int a,int b,int c)
{
dd=a;
mm=b;
yy=c;
display();	
}
void display()
{
   cout<<dd<<"/"<<mm<<"/"<<yy<<endl;	
}
};


main()
{
Birthday bdali;//here im creating an object
bdali.fill(7,1,2022);
Birthday bdtia;
bdtia.fill(30,5,2003);	

}

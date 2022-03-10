#include<iostream>
using namespace std;


main()
{
    int i, check=0, j;
    
    
    cout<<"The Prime Numbers Between 1 to 1000 are:\n";
    
    

    for(i=1; i<=1000; i++)
    {
        for(j=2; j<i; j++)
       {
		     if(i%j==0)
     {
         check++;
		   break;
           }
        }
        if(check==0 && i!=1)
      
			      cout<<i<<endl;
        check = 0;
   
}
     cout<<endl;

}

#include<iostream>
using namespace std;

void reverse(int number)
{
       if (number < 10)
       {
    cout<< number;
}
       else
       {
           cout<<number % 10;
           reverse(number/10);
       }
   }
   
int main()
{
    int num;
 cout<<"Enter your number :";
 cin>>num;
 cout<<"Reverse of the input number is:  ";
 reverse(num);
}


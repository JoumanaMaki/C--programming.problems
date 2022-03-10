#include<iostream>
using namespace std;

main(){
	char x;
	cout<<"enter the letter :"<<endl;
	cin>>x;
	
	switch(x){
		case'a':
		case'c':
		case'k': cout<<"Case 1";break;
		case'p':
		case'm':
		case't': cout<<"Case 2";break;
		default: cout<<"Case 3";break;	
	
}}

#include<iostream>
using namespace std;

main(){
	int numbers[50];
	
	for(int i=0;i<50;i++){
		cout<<"Enter the number["<<i<<"]";
		cin>>numbers[i];	
	}
	
	int min=numbers[0];
		for(int i=1;i<50;i++){
		if(min>numbers[i]){
			min=numbers[i];
		}
			
	}
	cout<<"The minimum number is: "<<min;
		
	}

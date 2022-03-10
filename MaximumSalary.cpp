#include<iostream>
using namespace std;

void InputSalary(){
	
	int Salary[5];
	for(int i=0;i<5;i++){

	cout<<"Enter the Salary["<<i<<"]";
	cin>>Salary[i];
}

int max=0;
	for(int i=0;i<5;i++){
if(max<Salary[i])
{ max=Salary[i];
}

}
cout<<"the maximum salary is :"<<max;

}
main(){
	
InputSalary();

}

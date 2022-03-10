#include<iostream>
using namespace std;

void InputSalary(){
	
	int Salary[5];
	for(int i=0;i<5;i++){

	cout<<"Enter the Salary["<<i<<"]";
	cin>>Salary[i];
}
cout<<"The salaries of the 5 employees are: "<<"\n";
	for(int i=0;i<5;i++){

	cout<<Salary[i]<<"\t";

}

}
main(){
	
InputSalary();

}

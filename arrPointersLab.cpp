#include<iostream>
using namespace std;
main(){
	int i,n;
	int arr[n];
	int*p;
	cout<<"the size of the array is: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{cout<<"Enter the element arr["<<i<<"] of the array: ";
	cin>>arr[i];
	}
	
	cout<<"the elements of the array are: "<<endl;

	p=arr;
		for(i=0;i<n;i++)
	{cout<<*p<<"\t";
	p++;
	
	}
	
	
	
}

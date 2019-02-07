#include <iostream>
#include <conio.h>
using namespace std;
void reverse(int [], int);
main(){
	const int arraysize=5;
	int a[arraysize]={0,1,12,3,14};
	reverse(a,arraysize);
	cout<<"***main before reverse***\n";
	for(int i=0 ; i<arraysize ;i++)
	cout<<a[i]<<endl;
	}
	void reverse(int a[] , int sizeOfarray){
		cout<<"***reverse***\n";
		for(int i=sizeOfarray-1 ; i>=0  ;i--)
		cout<<a[i]<<endl;
	}

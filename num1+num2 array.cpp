#include <iostream>
#include <conio.h>
using namespace std;
int sum(int , int);
main(){
	int num1,num2,NumSum;
	cout<<"enter first number :";
	cin>>num1;
	cout<<"enter second number :";
	cin>>num2;
	NumSum=sum(num1,num2);
	cout<<NumSum;
	getch();
	return 0;
}
int sum(int num1,int num2){
	int NumSum=num1+num2;
	return NumSum;
}

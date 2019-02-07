#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int n,i,number,ave,maxave=0,twoave=0;
	long int number1=0,number2=03;
	cout<<"plz enter the mark of student :\n";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"plz enter number of student :\n";
		cin>>number; 
		cout<<"plz enter ave of student:\n";
		cin>>ave;
		}
		if(ave>20){
			cout<<"plz enter ave<=20 of student\n";
			cin>>ave;
		}
	if(maxave<ave){
		twoave=maxave;
		maxave=ave;
		number2=number1;
		number1=number;
	}
	else if(twoave<ave){
		twoave=ave;
		number2=number;
	}
	cout<<"maxave is="<<maxave<<"student number="<<number1;
	cout<<"twoave is="<<twoave<<"student number="<<number2;
	getch();
}

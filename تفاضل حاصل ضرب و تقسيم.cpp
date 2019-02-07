#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float a,b,result;
	cout<<"plz enter 2 float number :\n";
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	while(a!=0 || b!=0){
		result=(a*b)-(a/b);
		cout<<"result ="<<result;
		cout<<"\n plz enter 2 float number :";
			cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
		cin>>b;
	}
	getch();
	
}

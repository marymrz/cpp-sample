#include <iostream>
#include <conio.h>
using namespace std;
void scope(int);
int  main(){
	int x=10;
	cout<<"first value of A="<<x<<endl;
	scope(x);
	cout<<"third value of A="<<x<<endl;
	getch();
}
void scope(int a){
	a++;
	cout<<"second value of A="<<a<<endl;
}

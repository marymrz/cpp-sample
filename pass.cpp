#include <iostream>
#include <conio.h>
using namespace std;
void pass(int , int*);

int main(){
	int x=1,y=1;
	pass(x,&y);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}
void pass(int x,int *y){
	cout<<"x="<<++x<<endl;
	cout<<"y="<<++*y<<endl;
	
}

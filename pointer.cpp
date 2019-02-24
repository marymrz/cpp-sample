#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int x,y;
	int *pointer;
	pointer=&x;
	*pointer=10;
	pointer=&y;
	*pointer=20;
	cout<<"x :"<<x<<endl;
	cout<<"y :"<<y<<endl;
	}

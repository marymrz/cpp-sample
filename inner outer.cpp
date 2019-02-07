#include <iostream>
#include <conio.h>
using namespace std;
int y=6;
main(){
	int x=3;
	int y=10;
	{
		int y=23;
		cout<<"inner text :"<<y<<endl;
	}
	cout<<"outer text:"<<y<<endl;
}

#include <iostream>
#include <conio.h>
using namespace std;
int foo();
main(){
	cout<<foo()<<endl;
	cout<<foo()<<endl;
	cout<<foo()<<endl;
}
int foo(){
static int i=0;
	return ++i;
}

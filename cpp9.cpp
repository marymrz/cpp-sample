#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int increment (int);
int x=2;
int main(){
	  x=increment(x);
	  cout<<x;
	  x=increment(x);
	  cout<<x;
}
int increment (int a){
	return a+1;
}

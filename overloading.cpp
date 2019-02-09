#include <iostream>
#include <conio.h>
using namespace std;
void func(int a){
	cout<<a<<endl;
              	}
	void func(int a,int b){
		cout<<a+b<<endl;
	}
	void func(int a,int b,int c){
		cout<<a+b+c<<endl;
	}
int main(){
	func(10);
	func(10,10);
	func(10,10,10);
	getch();
}

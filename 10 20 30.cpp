#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int numbers[5];
	int *p;
	p=numbers;
	*p=10;
	p++;

	p=&numbers[2];
	*p=30;

	for(int n=0;n<3 ;n++)
	cout<<numbers[5]<<" ,";
}


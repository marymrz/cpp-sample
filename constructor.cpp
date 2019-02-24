#include <iostream>
#include <conio.h>
using namespace std;
class math{
	public:
		math();
		math(float,float);
		float x,y;
        	float print(){
	         	return (x+y)/2;
	}
};
math::math(){
	x=0;
	y=0;
}
math::math(float num1,float num2){
	x=num1;
	y=num2;
}
main(){
float a,b;
	cin>>a>>b;
	math m(a,b);
	cout<<m.print();
}
//constructor

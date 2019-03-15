#include <iostream>
#include <conio.h>
using namespace std;
class circule{
	public:
		void inputRadius();
		void  calculate();
		void  print();
	private:
	 int radius;
	 float area;
	 float perime;	
};
void circule::inputRadius(){
	cout<<"enter radius :";
	cin>>radius;
}
void circule::print(){
	cout<<"area is:"<<area<<"\nperimeter ="<<perime;
}
void circule::calculate(){
	area=radius*radius*3.14;
	perime=2*3.14*radius;
}
int main(){
	circule crl;
	crl.inputRadius();
	crl.calculate();
	crl.print();
	cin.get();
}

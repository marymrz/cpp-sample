#include <iostream>
#include <conio.h>
using namespace std;
class math{
	public:
		int x,y;
		int print(){
			return (x+y)/2;
		}
};
main(){
	math m;
	cin>>m.x>>m.y;
	cout<<m.print();
}

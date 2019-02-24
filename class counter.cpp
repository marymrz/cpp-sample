#include <iostream>
#include <conio.h>
using namespace std;
class count{
	public:
		int x;
		int print(){
			cout<<x<<endl;
		}
};
main(){
	count counter;
	count*countPtr=&counter;
	counter.x=1;
	counter.print();
	countPtr->x=5;
	countPtr->print();
}

// -> hamoon . hast

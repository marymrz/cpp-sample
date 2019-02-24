#include <iostream>
#include <conio.h>
using namespace std;
class rectangle{
	private:
		int width,height;
		public:
	rectangle();
	rectangle(int ,int);
		int area(){
			return width*height;
		}
};
rectangle::rectangle(){
	width=0;
	height=0;
}
rectangle::rectangle(int a,int b){
	width=a;
	height=b;
}
main(){
	int a,b;
	cin>>a>>b;
    rectangle rec(a,b);
      cout<<rec.area()<<endl;
	
}

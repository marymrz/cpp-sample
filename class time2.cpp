#include<iostream>
#include<conio.h>
using namespace std;
class time{
	public:
		int hour,minute,second;
		time(int h,int m,int s){
			hour=h;
			minute=m;
			second=s;

	}
	void print(){
		cout<<hour<<":"<<minute<<":"<<second;
	}
		
};
main(){
	int h,m,s;
cin>>h>>m>>s;
time t(h,m,s);
t.print();
	
	
}

#include <iostream>
#include <conio.h>
using namespace std;
class time{
	public:
		time();
		void setTime(int,int,int);
		void printStandard();
		private:
			int hour;
			int minute;
			int second;
};
 time::time(){
	hour=12;
	minute=0;
	second=0;
}
void time::setTime(int h,int m,int s){
	hour=(h>=0 && h<24)? h:0;
	minute=(m>=0 && m<60)? m:0;
	second=(s>=0 && s<60)? s:0;
}
void time::printStandard(){
	cout<<((hour==0 || hour==12)? 12:hour%12)
	<<":"<<(minute<10 ? "0":"")<<minute
	<<":"<<(second<10 ? "0":"")<<second
	<<(hour<12 ? "Am":"Pm");
}
int main(){
	time t;
	cout<<"\nThe initial standard time is:";
	t.printStandard();
	t.setTime(10,27,6);
	cout<<endl;
	cout<<"Standard time after setTime is:";
	t.printStandard();
	t.setTime(99,99,99);
	cout<<"\nStandard time not accept invalid time:";
	t.printStandard();
	cout<<endl;
}

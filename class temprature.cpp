#include <iostream>
#include <conio.h>
using namespace std;
class simplecontrol{
		private:
		float temprature;
		public:
			float getTemprature(){
				return temprature;
			}
			void setTemprature(float x){
				temprature=x;
			}
};
int main(){
	simplecontrol control;
	control.setTemprature(25.4);
	cout<<"\n temprature is :"<<control.getTemprature();
	cin.get();
}

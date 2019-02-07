#include <iostream>
#include <conio.h>
using namespace std;
void foo();
int y=6;
  main(){ 
   
  	foo();
  	  int y=10;
  	 {
      int y=23;
           cout<<"inner text:"<<y<<endl;
}
           cout<<"outer text:"<<y<<endl;
}
void foo(){
	cout<<"in foo:"<<y<<endl;
}

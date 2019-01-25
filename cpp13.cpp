#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a>=0 && a<=9)
	cout<<"1";
else if(a>=10 && a<=99)
     	cout<<"2";
   else	if(a>=100 && a<=999)
	     cout<<"3";
      else	if(a>=1000 && a<=9999)
       	 cout<<"4";
	else
	cout<<"extra digits";
	getch();
}

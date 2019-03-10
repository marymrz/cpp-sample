#include<iostream>
#include<conio.h>
using namespace std;
int main(){
float a,b,r,s,p;
int num;
cout<<"1)circule";
cout<<"\n2)rectangle";
cout<<"\n3)triangle";
cout<<"\n4)exit";
cin>>num;
switch(num){
	case 1:
		cin>>r;
		s=3.14*r*r;
		cout<<"s is:"<<s<<endl;
		p=2*3.14*r;
		cout<<"p is:"<<p<<endl;
		break;
	case 2:
	   cin>>a>>b;
	   s=a*b;
	   cout<<"s is:"<<s<<endl;
	   p=(a+b)*2;
	   cout<<"p is:"<<p<<endl;
	break;
	case 3:
	   cin>>a>>b;
	   s=(a*b)/2;
	   cout<<"s is:"<<s<<endl;
	break;
	case 4:
	   exit(0);
	break;
	default:
	   cout<<"\nwrong";
}
getch();
}

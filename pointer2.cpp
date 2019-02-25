#include<iostream>
#include<conio.h>
using namespace std;
main(){
int x=5, y=6;
int *xPtr ,*yPtr;
xPtr=&x;
yPtr=&y;
cout<<"x="<<x<<'\t'<<"y="<<y<<endl;
cout<<"&x="<<&x<<'\t'<<"&y="<<&y<<endl;	
}

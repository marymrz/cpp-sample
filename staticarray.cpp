#include <iostream>
#include <conio.h>
using namespace std;
void staticarrayInt();
main(){
	staticarrayInt();
	staticarrayInt();
}
void staticarrayInt(){
	int array2[3]={1,2,5};
	for(int i=0 ; i<3 ;i++){
		array2[i]+=5;
		cout<<array2[i]<<endl;
	}
	cout<<"***********\n";
	
}

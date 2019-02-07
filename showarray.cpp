#include <iostream>
#include <conio.h>
using namespace std;
void showarray(const int[],int);
main(){
	const int m=8;
	int a[m]={2,5,4,36,6,1,13,3};
	int temp;
	for(int j=0; j<m-1 ; j++){
		if(a[j]>a[j+1]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
}
showarray(a , m);
}
void showarray(const int array[],int m){
	for(int c=0 ; c<m ; c++){
		cout<<array[c]<<'\t';
		cout<<endl;
	}
}


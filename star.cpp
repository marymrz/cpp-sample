#include <iostream>
#include <conio.h>
using namespace std;
main(){
	const int arraysize=10;
	int num[arraysize]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0 ; i<arraysize ;i++){
		cout<<num[i]<<'\t';
		for(int j=1 ; j<=num[i]; j++)
		cout<<'*';
		cout<<endl;
	}
}

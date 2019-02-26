#include<iostream>
#include<conio.h>
using namespace std;
void print(int [3][5] );
main(){
	int array[3][5]={
		{15,20,88,6,24	},
		{77,8,9,78,11	},
		{22,33,44,55,66	}
	};
	cout<<"***array***\n";
	print(array);
}
void print(int a[3][5] ){
	for( int i=0 ; i<3 ;i++){
		for(int j=0 ; j<5 ;j++)
		cout<<a[i][j]<<'\t';
		cout<<endl;
	}
	
	
}

#include<iostream>
#include<conio.h>
using namespace std;
main(){
	const int numArrays=2, numRows=3 ,numCols=4;
	int x[numArrays][numRows][numCols]={
		{ {1,2,3,4} , {5,6,7,8}  ,{9,10,11,12}	},
		{ {13,14,15,16} ,{17,18,19,20} , {21,22,23,24} 	}
	};
	for(int i=0 ; i<numArrays ;i++){
		for(int j=0 ; j<numRows ;j++){
			for(int k=0; k<numCols ;k++){
				cout<<x[i][j][k]<<'\t';
			}
			cout<<endl;
		}
	}
}

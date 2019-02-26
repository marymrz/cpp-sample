#include<iostream>
#include<conio.h>
using namespace std;
void print(int [2][3]);
main(){
	const int numRows=2 , numCols=3;
	int mArray[numRows][numCols]={	 {1,2,3},{4,5,6}	};
	for(int i=0; i<numRows ;i++){
		for(int j=0; j<numCols ;j++)
		cout<<mArray[i][j]<<'\t';
		cout<<endl;
	}
}

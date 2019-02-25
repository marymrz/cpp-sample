#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	const int numRows=3,numCols=2;
	string y[numRows][numCols];
	for(int i=0; i<numRows ;i++){
		for(int j=0; j<numCols ;j++)
		cin>>y[i][j];
	}
	for(int i=0; i<numRows ;i++){
		for(int j=0; j<numCols ;j++)
		cout<<y[i][j]<<'\t';
		cout<<endl;
	}
}

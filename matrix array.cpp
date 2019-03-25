#include <iostream>
#include <conio.h>
using namespace std;
void sum(int[][2],int);

int main(){
	const int m=3,n=2;
	int matrix[m][n]={{2,5} ,{3,6}, {4,7}};
	sum(matrix,m);
}
void sum(int x[][2],int a){
	int i,j;
	cout<<"row\t\t"<<"sum\t\t";
	cout<<"----------\n";
	for(i=0 ; i<a ; i++){
		int sum=0;
	for(j=0 ; j<2 ;j++)
	sum+=x[i][j];
	cout<<i+i<<"\t\t"<<sum<<endl;
}
}

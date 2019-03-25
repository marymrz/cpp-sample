#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int table[10][10],i,j;
	for(i=0 ;i<=10 ;i++)
	 for(j=0 ;j<=10 ;j++)
	 table[i][j]=(i+1)*(j+1);
	 for(i=0 ;i<10 ;i++){
	 	for(j=0 ;j<10 ;j++)
	 	cout<<table[i][j]<<"\t";
	 	cout<<endl;
	 }
	 
}

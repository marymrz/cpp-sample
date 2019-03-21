#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	const int n=10;
	int testArray[n];
	int negative=0,positive=0;
	cout<<"\n enter"<<n<<"numbers and press enter:";
	for(int i=0; i<n ;i++){
		cin>>testArray[i];
	}
	cout<<"\n enter negative numbers are :";
	for(int i=0 ; i<n ;i++)
	if(testArray[i]<0){
		cout<<" "<<testArray[i];
		negative++;
	}
	cout<<"\n enter positive numbers are :";
	for(int i=0 ; i<n ;i++)
	if(testArray[i]>0){
		cout<<" "<<testArray[i];
		positive++;
	}
	cout<<"\n number of negatives:"<<negative;
	cout<<"\n number of positives:"<<positive;
}

#include<iostream>
#include<conio.h>
using namespace std;
void showArray(const int[],int);
main(){
	const int arraySize=6;
	int a[arraySize]={2,5,4,3,6,1};
	int temp;
	
	showArray(a, arraySize);
	cout<<"********************\n";
	for(int i=0;i<arraySize-1;i++){
		for(int j=0; j<arraySize-1;j++){
			if(a[j]>a[j+1]){
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
		
		}
	}
	showArray(a, arraySize);
	
}
	void showArray(const int array[], int arraySize){
		for(int c=0;c<arraySize; c++){
			cout<<array[c]<<" ";
		cout<<endl;
		}
	}

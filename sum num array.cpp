#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int num[5];
	int sum=0,count;
	for(count=0;count<5;count++){
		cout<<"enter number "<<count+1<<" :";
		cin>>num[count];
		sum+=num[count];
	}
	cout<<"\nSum Of Number is :"<<sum;
	getch();
}

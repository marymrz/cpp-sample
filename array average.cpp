#include<iostream>
#include<conio.h>
using namespace std;
void find(float[],int);
int main(){
	const int arraysize=10;
	 float array1[arraysize];
	   cout<<"\nEnter 10 average and press Enter:\n";
	     for(int i=0;i<arraysize ;i++)
	      cin>>array1[i];
find(array1,arraysize);
}
void find(float array1[],int arraysize){
  int current_count,max_count=-1;
    float max_value;
	float current_value;
    for(int i=0 ;i<arraysize ;i++){
        current_value=array1[i];
         current_count=0;
    for(int j=0 ;j<arraysize ;j++){
    if(array1[j]==current_value)	
        current_count++;
}
    if(current_count>max_count){
     	max_count=current_count;
	     max_value=current_value;
	 }
}
cout<<"\n Max of ave :"<<max_value<<"is"<<max_count;
}

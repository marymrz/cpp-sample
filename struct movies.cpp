#include <iostream>
#include <conio.h>
using namespace std;
struct movies_t{
	string title;
	int year;
}films[3];
void print(movies_t movie);
main(){
	for(int n=0 ;n<3 ;n++){
		cin>>films[n].title>>films[n].year;
	}
	for(int n=0 ;n<3 ;n++){
		print(films[n]);
	}
}
void print(movies_t movie){
	cout<<movie.title<<'\t'<<movie.year<<endl;
}

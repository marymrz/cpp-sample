#include <iostream>
#include <conio.h>
using namespace std;
class students{
	public:
		struct{
			string firstname;
			string lastname;
			string fullname(){
				return firstname+" "+lastname;
			}
		}stds;
};
main(){
	students firstgrade;
	firstgrade.stds.firstname="maryam";
	firstgrade.stds.lastname="mirzakhani";
	cout<<firstgrade.stds.fullname()<<endl;
	students secondgrade;
	secondgrade.stds.firstname="bahar";
	secondgrade.stds.lastname="moqadam";
	cout<<secondgrade.stds.fullname()<<endl;

	
}

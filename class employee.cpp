#include <iostream>
#include <conio.h>
using namespace std;
class date{
	public:
		int year;
		int month;
		int day;
};
class person{
	public:
		struct{
			string firstname;
			string lastname;
			string fullname(){
				return firstname+" "+lastname;
			}
		}person;
};
class employee{
	public:
	date hiredate;
	person employee;
};
main(){
	employee emp;
	emp.employee.person.firstname="mary";
	emp.employee.person.lastname="mrz";
	emp.hiredate.day=26;
	emp.hiredate.month=11;
	emp.hiredate.year=2019;
	cout<< "firstname ="<<emp.employee.person.firstname<<endl
<<"lastname =" <<emp.employee.person.lastname<<endl
<<"day ="<<emp.hiredate.day<<endl
<< "month ="<<emp.hiredate.month<<endl
 <<"year ="<<emp.hiredate.year<<endl;
}

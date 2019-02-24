#include <iostream>
#include <conio.h>
using namespace std;
class Employee{
	public:
		struct{
			string firstname;
			string lastname;
		}emp;
		void browse(Employee e){
			cout<<e.emp.firstname<<'\t'<<e.emp.lastname<<'\t';
		}
};
main(){
	Employee employee;
	cin>>employee.emp.firstname>>employee.emp.lastname;
	employee.browse(employee);
}

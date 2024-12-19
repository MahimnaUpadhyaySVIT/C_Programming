#include <stdio.h>
#define e_name 50
#define d_name 50

struct employee{
	int employee_id;
	char employee_name[e_name];
	
	struct department{
		int department_no;
		char department_name[d_name];
	};
}; 
struct employee emp;
struct department dept;

void main(){
	printf("Enter employee id and name: ");
	scanf("%d %s", &emp.employee_id, &emp.employee_name);

	printf("Enter department id and name: ");
	scanf("%d %s" , &dept.department_no, &dept.department_name);

	printf("-----------------------EMPLOYEE DETAILS-----------------------\n");
	printf("Employee ID \t Employee Name \t Department ID \t Department Name \n %d %s %d %s",
			emp.employee_id, emp.employee_name, dept.department_no, dept.department_name);
}



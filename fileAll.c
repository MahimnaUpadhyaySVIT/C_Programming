#include <stdio.h>
#define EMPLOYEE_NAME 50
#define DEPARTMENT_NAME 50

struct employeeData {
    int employee_id;
    char employee_name[EMPLOYEE_NAME];
};

struct departmentData {
    int department_id;
    char department_name[DEPARTMENT_NAME];
};

void createFile(int emp_id, char emp_name[], int dept_id, char dept_name[]);
void openFile(char fileName[]);

void main() {
    struct employeeData employee;
    struct departmentData department;
	int option;
    char fileName[256];

	printf("Add Data or Show Data? \n");
	printf("1 [Add] \n 2[Show] \n");
	scanf("%d", &option);

	switch(option){
		case 1:
			printf("Enter employee id and name: ");
    		scanf("%d", &employee.employee_id);
    		scanf("%s", employee.employee_name);

    		printf("Enter department id and name: ");
    		scanf("%d", &department.department_id);
    		scanf("%s", department.department_name);

			createFile(employee.employee_id, employee.employee_name, department.department_id, department.department_name);	
			break;
		
		case 2:
			printf("Enter file name: ");
   			scanf("%s", fileName);

			openFile(fileName);
			break;

		default:
			printf("Enter valid option:");
	}
}

void createFile(int emp_id, char emp_name[], int dept_id, char dept_name[]) {
    FILE *fptr = fopen("employeeData.txt", "w");

    if (fptr == NULL) {
        perror("Error during file creation");
    } else {
        fprintf(fptr, "----------------------EMPLOYEE DETAILS------------------------\n");
        fprintf(fptr, "Employee ID \t Employee Name \t Department ID \t Department Name \n");
        fprintf(fptr, "%d \t\t %s \t\t %d \t\t %s\n", emp_id, emp_name, dept_id, dept_name);
        fclose(fptr);
    }
}

void openFile(char fileName[]) {
    FILE *fptr = fopen(fileName, "r");
    char fileData[1000];

    if (fptr == NULL) {
        perror("Error during opening a file");
    } else {
        printf("\nFile Content:\n");
        while (fgets(fileData, sizeof(fileData), fptr) != NULL) {
            printf("%s", fileData);
        }
        fclose(fptr);
    }
}


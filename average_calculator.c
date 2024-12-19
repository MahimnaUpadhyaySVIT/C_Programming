#include <stdio.h>
#define student_size 5

void main(){
	int i, j, sub1, sub2, sub3, student[student_size];
	double average;

	for(i=0; i<student_size; i++){
		printf("Enter student Id:");
		scanf("%d", &student[i]);
		
		printf("Enter marks of subject one, two and three:");
		scanf("%d%d%d", &sub1, &sub2, &sub3);

		for(j=0; j<student_size; j++){
			average = sub1 + sub2 + sub3 / 3;
			printf("student %d got average of %lf", student[i], average);
		}

	}


}

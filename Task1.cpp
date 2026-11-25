#include<stdio.h>
#include<stdlib.h>
int main(){
	int *regNumbers;
	int totalStudents, extraStudents, i;
	printf("\n\nThis program is written to maintain student registration numbers for library membership using Dynamic Memory Allocation");
	printf("\n================================================================================================================");
	printf("\nEnter the number of students who want to register: ");
	scanf("%d", &totalStudents);

	regNumbers = (int*)malloc(totalStudents * sizeof(int));

	for(i=0; i<totalStudents; i++)
	{
		printf("\nEnter the registration number of student %d: ", i+1);
		scanf("%d", &regNumbers[i]);
	}

	printf("\n\nThe registration numbers after the first registration phase are:");
	for(i=0; i<totalStudents; i++)
	{
		printf("\n%d", regNumbers[i]);
	}

	printf("\n\nEnter the number of additional students who want to register: ");
	scanf("%d", &extraStudents);

	regNumbers = (int*)realloc(regNumbers, (totalStudents+extraStudents) * sizeof(int));

	for(i=totalStudents; i<totalStudents+extraStudents; i++)
	{
		printf("\nEnter the registration number of student %d: ", i+1);
		scanf("%d", &regNumbers[i]);
	}

	totalStudents = totalStudents + extraStudents;

	printf("\n\nThe registration numbers after the additional registration phase are:");
	for(i=0; i<totalStudents; i++)
	{
		printf("\n%d", regNumbers[i]);
	}

	free(regNumbers);
	return 0;
}

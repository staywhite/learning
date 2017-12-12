/*#include<stdio.h>
#define NUM_STUDENT 10
#define SUBJECT 5
int main(void)
{
	int grades[NUM_STUDENT][SUBJECT];
	int max,min,average,student,total,subject;
	for(student=0;student<NUM_STUDENT;student++){
    printf("Enter the student %d great:",student+1);
	fflush(stdout);
    for(subject=0;subject<SUBJECT;subject++)
    scanf("%d",&grades[NUM_STUDENT][SUBJECT]);}
     
	printf("\nStudent   Toal   Average\n");
	for(student=0;student<NUM_STUDENT;student++){
		printf("%4d    ",student+1);
		fflush(stdout);
		for(subject=0;subject<SUBJECT;subject++)
			scanf("%d",&grades[NUM_STUDENT][SUBJECT]);}	
		
	printf("\nSubject   Average   max   min\n");
	for(subject=0;subject<SUBJECT;subject++){
		printf("%3d     ",subject+1);
		total=0;max=0;min=100;
		for(student=0;student<NUM_STUDENT;student++){
			total+=grades[student][subject];
			if(grades[student][subject]>max)
				max=grades[student][subject];
			if(grades[student][subject]<min)
				min=grades[student][subject];
			
		}
		printf("%3d    %3d    %3d\n",total/NUM_STUDENT,max,min);
	
	}
	return 0;
}*/
#include <stdio.h>

#define NUM_QUIZZES  5
#define NUM_STUDENTS 10

int main(void)
{
  int grades[NUM_STUDENTS][NUM_QUIZZES];
  int max, min, quiz, student, total;

  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("Enter grades for student %d: ", student + 1);
	fflush(stdout);
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      scanf("%d", &grades[student][quiz]);
  }	

  printf("\nStudent  Total  Average\n");
  for (student = 0; student < NUM_STUDENTS; student++) {
    printf("%4d      ", student + 1);
    total = 0;
    for (quiz = 0; quiz < NUM_QUIZZES; quiz++)
      total += grades[student][quiz];
    printf("%3d     %3d\n", total, total / NUM_QUIZZES);
  }

  printf("\nQuiz  Average  max  min\n");
  for (quiz = 0; quiz < NUM_QUIZZES; quiz++) {
    printf("%3d     ", quiz + 1);
    total = 0;
    high = 0;
    min = 100;
    for (student = 0; student < NUM_STUDENTS; student++) {
      total += grades[student][quiz];
      if (grades[student][quiz] > high)
        high = grades[student][quiz];
      if (grades[student][quiz] < min)
        min = grades[student][quiz];
    }
    printf("%3d    %3d   %3d\n", total / NUM_STUDENTS, high, min);
  }

  return 0;
}
    
	
	
	
	
	
	
	

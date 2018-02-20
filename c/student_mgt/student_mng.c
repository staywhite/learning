/*
学生管理系统：
需求：
1. 录入数据（姓名，学号，英语成绩，专业课成绩，数学成绩）；
2. 保存数据；
3. 查找数据；
4. 修改数据；

*/

#include <stdio.h>

#define STUDENT_NUM 5

struct student
{
	char name[20];
	int num;
};

struct student computer_class[STUDENT_NUM];

void help_func()
{
	printf("\n=============================================\n");
	printf("how to use this program:\n");
	printf("a: add data\n");
	printf("p: print data\n");
	printf("s: save data\n");
	printf("h: help info\n");
	printf("q: quit\n");
	printf("*********************************************\n");
}

void add_data_func()
{
	int i = 0;
	printf("going to add data.\n");
	fflush(stdout);
	for ( i=0; i<STUDENT_NUM; i++ )
	{
		printf("Input name of student: ");fflush(stdout);
		scanf("%s", computer_class[i].name);
		printf("Input number of student: ");fflush(stdout);
		scanf("%d", &computer_class[i].num);
	}
	printf("data add successfully\n");
	return ;
}

void print_data_func()
{
	int i = 0;
	printf("going to print data!\n");
	printf("number    name     english   math  computer\n");
	for ( i=0; i<STUDENT_NUM; i++ )
	{
		printf("%d    %s\n", computer_class[i].num, computer_class[i].name);
	}
	printf("printf successfully!\n");
}

int main()
{
    char choice = -1;
	
	help_func();
	fflush(stdout);
	while(1)
	{
		choice = -1;
		printf("Please input your choice:");
		fflush(stdout);
		scanf("%c", &choice);
		printf("choice = %c\n", choice);
		
		if ( 'q' == choice )
		{
			printf("going to quit");
			break;
		}
		else if ( 'a' == choice )
		{
			add_data_func();
		}
		else if ( 'p' == choice )
		{
			print_data_func();
		}
		else if ( 'h' == choice )
		{
		    help_func();
		}
		else
		{
		    printf("Function not finished!\n");	
			
		}
		
	}
	
	return 0;
}













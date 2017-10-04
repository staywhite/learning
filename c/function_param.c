#include <stdio.h>

void print1()
{
	int i = 0;
	printf("hello world!\n");
	for ( i=0; i<5; i++ )
	{
		printf("%d ", i);
	}
	printf("\n");
	
}

void print2()
{
	int i = 0;
	printf("hello world!\n");
	for ( i=0; i<10; i++ )
	{
		printf("%d ", i);
	}
	printf("\n");
	
}

void print100()
{
	int i = 0;
	printf("hello world!\n");
	for ( i=0; i<100; i++ )
	{
		printf("%d ", i);
	}
	printf("\n");
	
}


int main()
{
	print1();
	print2();
	print100();
	
	return 0;
}
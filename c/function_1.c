#include <stdio.h>

int score[5] = {60, 49,77, 23, 70};

void my_print()
{
	int i = 0;
	
	for ( i=0; i<5; i++ )
	{
		printf("%d\n", score[i]);
		
	}
	
}

void count(int num)
{
	int i = 0;
	for ( i=0; i<num; i++ )
	{
		printf("%d\n", i);
		
	}
}

int my_sum(int num)
{
	int i = 0;
	int sum = 0;
	for ( i=0; i<=num; i++ )
	{
		sum = sum + i;
	}
	printf("sum = %d\n", sum);
}

void hello()
{
	printf("Hello world!\n");
	return;
}

int main()
{
	hello();
    hello();
	hello();
	my_print();
	printf("-----------------\n");
	//count(10000);
	my_sum(100);
	
	return 0;
}
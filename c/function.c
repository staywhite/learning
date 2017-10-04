#include <stdio.h>
#include <math.h>

void my_sum(int num)
{
	int i = 0;
	int sum = 0;
	for ( i=0; i<=num; i++ )
	{
		sum = sum + i;
		
	}
	printf("sum = %d\n", sum);
}

void my_sum1(int num)
{
	int sum = 0;
	sum = (1 + num)*num/2;
	
	printf("sum = %d\n", sum);
	
}

void test()
{
	printf("testsssssssssssssss\n");
	printf("testsssssssssssssss\n");
	printf("testsssssssssssssss\n");
	printf("testsssssssssssssss\n");
	printf("testsssssssssssssss\n");
	
}

int main()
{
	/*
	int i = 0;
	int sum = 0;
	for ( i=0; i<=100; i++ )
	{
		sum = sum + i;
		
	}
    
	printf("sum = %d\n", sum);
	
	int sum1 = 0;
	for ( i=0; i<=1000; i++ )
	{
		sum1 = sum1 + i;
		
	}
    
	printf("sum1 = %d\n", sum1);
	
	int sum2 = 0;
	for ( i=0; i<=100000; i++ )
	{
		sum2 = sum2 + i;
		
	}
    
	printf("sum2= %d\n", sum2);
*/

// 88888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
    
	test();
	test();
	test();
	
	my_sum(100);
    my_sum(10000);
	my_sum(1000000);
	
	
	my_sum1(100);
    my_sum1(10000);
	my_sum1(100000);
	
	
	return 0;
}
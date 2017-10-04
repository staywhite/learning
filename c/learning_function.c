#include <stdio.h>

void print_all(int a)
{
	int i = 0;
	for ( i=0; i<a; i++ )
	{
		printf("%d ", i);
	}
	printf("\n");
	
}
void me (int m)
{
	int i = 0;
	int sum = 0;
	for (i=0;i<=m; i++ )
	{
		sum = sum + i ;
		
	}
	printf("%d ",sum  );
	printf("\n");
	
	
}


void my_add(int x, int y)
{
	int sum = x + y;
	printf("%d + %d = %d\n", x, y, sum);
}
void my_mutiply(int x,int y,int z)
{
	int sum = x*y*z;
	printf("%d*%d*%d=%d\n",x, y, z,sum);
}
void my_c(int x, int y, int z,int o )
{
	float sum = (((x/y)/z)/o) ;
	printf("(((%d/%d)/%d)/%d)=%f\n", x,y,z,o,sum);
}


int test_return()
{
	return 3;
	
}

int my_add1(int x, int y)
{
	return x+y;
	
}
float my_add2(int x, int y )
{
	return x/y;
}
int my_add3(int x, int y )
{
	return x*y;
}
int main()
{
	int tmp = 0, tmp1 = 0,tmp3 = 0;
	float tmp2 = 0;
    //print_all(5);
	//print_all(10);
	//print_all(100);
	//me(5);
	//me(100);
	
	//my_add(23, 46);
	//my_mutiply(123,456,789);
	//my_c(600,3,2,10);
	
	tmp = test_return();
	printf("tmp = %d\n", tmp);
	tmp3 = my_add3 (2,3);
	printf("tmp3=%d\n", tmp3);
	tmp2= my_add2(6,2);
	printf("tmp2=%f\n", tmp2);
	tmp1 = my_add1(2, 3);
	printf("tmp1 = %d\n", tmp1);
	
	return 0;
}
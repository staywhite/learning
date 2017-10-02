#include <stdio.h>

int main()
{
    int age = 0;
	
	while (1)
	{
		printf("Input age:\n");
		fflush(stdout);
		
		scanf("%d", &age);
		
		printf("My age is %d\n", age);
		
		
		
		if (age >= 18)
		{
			printf ("age >=18 is adult\n");
		}
		else
		{
			printf ("age < 18 is young\n");
		}
	}
	return 0;
	
}



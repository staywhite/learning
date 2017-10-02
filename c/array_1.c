#include <stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	float average = 0.0;
	
	int score[5] = {94, 34, 67, 88, 12};
	
	for ( i=0; i<5; i++ )
	{
		printf ("a[%d] = %d\n", i, score[i]);
	   sum = sum + score[i];
	}
	
	average = sum/5.0;
	
	printf("sum = %d, average = %f\n", sum, average);
		
	
	return 0;
}
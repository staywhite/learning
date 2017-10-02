#include <stdio.h>

int main()
{
	int score[5]={0};
	int i = 0;
	for ( i=0; i<5; i++ )
	{   printf ("Input score: ");
		fflush(stdout);
		
		scanf("%d", &score[i]);
        
        printf("%d\n", score[i]);		
	}

	
	
	return 0;
}
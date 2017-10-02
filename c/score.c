#include<stdio.h>
int main()
{
	int score = 0;
	while(1)
	{    printf ("input score :\n");
		 fflush(stdout);
	
	     scanf("%d", &score);
	     printf("my score is %d\n",score);
	
	
	    if (score <=60)
	   {
		printf ("score<=60 is bad\n ");
	    }
	    else 
	    {
		printf ("score>60 is fine\n ");
        }
	}
	return 0;
	
}
#include<stdio.h>
int main()
{
	int score = 0;
	while(1)
	{    
        printf ("input score :\n");
		fflush(stdout);
	
	    scanf("%d", &score);
	    printf("my score is %d\n",score);
	
        if ( score < 0 )
		{
			printf("bad num....\n");
			break;
		}			
	    else if (score <=60)
	    {
		    printf ("score<=60 is bad\n ");
	    }
		else if ( score<80 )
		{	
			printf("60<score<80 is good\n");
		}
	    else 
	    {
		    printf ("score>80 is perfect \n ");
        }
	}
	
	printf("success.");
	return 0;
	
}
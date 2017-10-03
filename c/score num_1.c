#include <stdio.h>

int main() 
{
    int score[5] = {0};   // score[5] = {0, 0, 0, 0, 0};
	int num[5] = {0};
	int number = 0;
	int sum = 0;
	int i = 0;
	int small = 0;
	int big = 0;
	float average = 0.0; 
	
	
	for ( i=0; i<5; i++ )
	{
        printf("i=%d\n",i);		
        printf("Input num: ");
		fflush(stdout);
		scanf("%d", &num[i]);  //从终端里提取数字到（作为）第”i“个score
		
        printf ("input score：");
		fflush(stdout);
		scanf("%d", &score[i]);
		sum = score[i] + sum;
		
	}
	
	average = sum/5; 
	
	printf ( "sum= %d  average=%f\n",sum, average);   //答应
	
	for ( i=0; i<5; i++ )
	{
		if (score[i]< average )
		{
			printf("num: %d  score: %d <average %f \n", num[i], score[i], average  );
			small++;
            		// small = small + 1;
		}
		else 
		{
			printf("num: %d  score: %d >=average %f \n", num[i], score[i], average );
			big++;
		}
	}
	      
    printf("small= %d\n, big = %d\n", small, big);
	
	
	
	
	return 0;
}
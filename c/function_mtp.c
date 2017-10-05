#include<stdio.h>
int main()
{
    int score[5] = {0};
	int i = 0;
	int unm = 0;
	for (i=0;i<5;i++)
	{   
        printf("input num: ");
		fflush(stdout);    // 刷新打印缓冲区
       scanf("%d",&score[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("score[%d]=%d\n",i,score[i]);
		
    }
	
	return 0;
}



	
	
	
	
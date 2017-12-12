#include<stdio.h>
int main()
{
	char ch;
	int len = 0;
	int ski = 0;
	float alen;
	printf("Enter a sentence:");
	fflush(stdout);
    ch = getchar();
	while(ch!='\n'){
		len++;
		ch = getchar();
		if(ch==' ')        //直接用上面读到的ch来判断。不要写成(ch=getchar())==' '  因为(ch=getchar())是下一次读出的ch，因此会漏掉上次的ch
		
			ski++;
		
	}
	alen=((len-ski)*1.0)/(ski+1);
	printf("%.1f",alen);
	//printf("%d%d ",len,ski);
	return 0;
	
	
	
	
}
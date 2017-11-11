#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter first date(mm/dd/yy):");
	fflush(stdout);
	scanf("%d/%d/%d",&a,&b,&c);
	printf("Enter second date(mm/dd/yy):");
	fflush(stdout);
	scanf("%d/%d/%d",&d,&e,&f);
	
	if (c==f&&a==d&&b<e)
		printf("%d/%d/%d is earlier than%d/%d/%d",a,b,c,d,e,f);	
	if (c==f&&a<d)
		printf("%d/%d/%d is earlier than%d/%d/%d",a,b,c,d,e,f);
	if (c<f)
		printf("%d/%d/%d is earlier than%d/%d/%d",a,b,c,d,e,f);
	if (c==f&&a==d&&b>e)
		printf("%d/%d/%d is earlier than%d/%d/%d",d,e,f,a,b,c);
	if (c==f&&a>d)
		printf("%d/%d/%d is earlier than%d/%d/%d",d,e,f,a,b,c);
	if (c>f)
		printf("%d/%d/%d is earlier than%d/%d/%d",d,e,f,a,b,c);
	 
	 return 0;
	 
		
	
	
}
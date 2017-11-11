#include<stdio.h>
int main()
{
	int a,b,c,d,max,min;
	printf("Enter four integers:");
	fflush(stdout);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if (a>=b&&a>=c&&a>=d)
		max = a;
	if (b>=a&&b>=c&&b>=d)
		max = b;
	if (c>=a&&c>=b&&c>=d)
		max = c;
	if (d>=a&&d>=b&&d>=c)
		max = d;
	if (a<=b&&a<=c&&a<=d)
		min = a;
	if (b<=a&&b<=c&&b<=d)
		min = b;
	if (c<=a&&c<=b&&c<=d)
		min = c;
	if (d<=a&&d<=b&&d<=c)
		min = d;
	
	printf("largest:%d\nsmallest:%d",max,min);
	return 0;
	
	
	
	
}
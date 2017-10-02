#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "hello world";
	int i = 0;
	
	printf("str = %s, len of str is %d\n", str, strlen(str));
	
	for ( i=0; i<strlen(str); i++ )
	{
		printf("%c\n", str[i]);
		
	}
	
	return 0;
}
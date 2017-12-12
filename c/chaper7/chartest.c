/*//Determines the lenth of a massage
#include<stdio.h>
int main()
{
	char ch;
	int len=0;
	printf("Enter a massage:");
    fflush(stdout);
	ch=getchar();
	while(ch != '\n'){
		len++;
		ch =getchar();
		
	}
	printf("yotessage was %d characters long.\n",len);
	return 0;*/
	/*char chF,chL;
	printf("Enter a first name and last name:");
	fflush(stdout);
	chF = getchar();
	chL = getchar();
	while(chL!='\n'){
		 chL = getchar();
		 break;
	}
	while(chF!='\n'){
		chF = getchar();
		
	}
    printf("%c,%c.",chF,chL);
    return 0;	
	
	
}*/
#include <stdio.h>

int main(void)
{
  char first_name;
  char ch_1;//名字
  char ch_2;//姓氏

  printf("Enter a first and last name:");
  fflush(stdout);
  scanf("%c",&first_name);//获得名的首字母；

while (getchar() != ' ')//获得名字
	{   
		ch_1=getchar();
	}

while ((ch_2 = getchar()) != '\n')//获得姓氏
  {

      printf("%c",ch_2);
  }

  printf(", %c.\n", first_name);//输出结果

  return 0;
}
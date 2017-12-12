#include<stdio.h>
#define N 100
int main()
{
    char ch[N];

    int i;
    int j;
    printf("Enter a message:");


    for(i=0;(ch[i]=getchar())!='\n';i++){
       if('a'<=ch[i]&&ch[i]<='z')
          ch[i]=ch[i]-'a'+'A';
          if(ch[i]=='A')
              ch[i]='4';
          else if(ch[i]=='B')
               ch[i]='4';
          else if(ch[i]=='E')
              ch[i]='3';
          else if(ch[i]=='O')
              ch[i]='0';
          else if(ch[i]=='S')
              ch[i]='5';}

     printf("In b1ff-speak:");
     for(j=0;j<i;j++)
       printf("%c",ch[j]);
     printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");

   return 0;

   }

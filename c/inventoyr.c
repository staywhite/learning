#include<stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part{
int number;
char name[NAME_LEN+1];
int on_hand;
int price;
}inventory[MAX_PARTS];

int num_parts=0; /*number of parts currently stored*/

int find_part(int number);

/*four nclude<stdio.h>
 * #include "readline.h"
 *
 * #define NAME_LEN 25
 * #define MAX_PARTS 100
 *
 * struct part{
 * int number;
 * char name[NAME_LEN+1];
 * int on_hand;
 * }inventory[MAX_PARTS];
 *
 *int num_parts=0;number of parts currently stored*/
/*four fuction in the program*/
void insert(void);
void search(void);
void insert(void);
void search(void);
void update(void);
void print(void);


/*****************************************************************************/
int main(void){
char code;
for(;;){
printf("Enter operation code: ");
scanf(" %c",&code);
while(getchar()!='\n')  /*skips to the end of line*/
;
switch(code){

case 'i':insert();
break;
case 's':search();
break;
case 'u':update();
break;
case 'p':print();
break;
case 'q':return 0;
default:printf("Illegal code\n");
}
printf("\n");
printf("Enter 'i': insert,'s':search,'u':update,'p':print,'q':exit \n");
}

}


/********************************************************************************
 *  * *find_part:Looks up a part number in the inventory array.Returns the array index*
 *   * *          if the part number is found;otherwise ,returns -1;                   *
 *    * ********************************************************************************/


int find_part(int number){
int i;
for(i=0;i<num_parts;i++){
if(inventory[i].number==number)
return i;
}
return -1;
}



/********************************************************************************
 *  * *insert:prompts the user for information about a new part and then inserts the  *
 *   * *       part into the database.prints an error message and returns prematurely  *
 *    * *       if the part already exists or the database is full                      *
 *     * ********************************************************************************/


void insert(void){
int part_number;

if(num_parts==MAX_PARTS){
printf("Database is full ;can`t add more parts.\n");
return;

}
printf("Enter the part number: ");
scanf("%d",&part_number);

if(find_part(part_number)>=0){
printf("Part already exists.\n");
return;
}
inventory[num_parts].number=part_number;
printf("Enter part name: ");
read_line(inventory[num_parts].name,NAME_LEN);
printf("Enter quantity on hand: ");
scanf("%d",&inventory[num_parts].on_hand);
printf("Enter the price:");
scanf("%d",&inventory[num_parts].price);
num_parts++;
}



/*******************************************************************************
 *  * *search:prompts the user to enter a  part number ,then looks up the part in the*
 *   * *       database.if the part exists ,prints the name and quantity on hand;     *
 *    * *       if not ,prints an error message;                                       *
 *     * *******************************************************************************/
void search(void){
int i,number;

printf("Enter the part number: ");
scanf("%d",&number);
i=find_part(number);
if(i>=0){
printf("Part name: %s\n",inventory[i].name);
printf("Quantity on hand: %d\n",inventory[i].on_hand);
printf("The price:%d\n",inventory[i].price);
}else
 printf("Part not found.\n");

}



void update (void)
{
 int i,number,change,change_price;

 printf("Enter part number:" );
 scanf("%d",&number);
 i= find_part(number);
 if(i>=0){
   printf("Enter change in quantity on hand:");
   scanf("%d",&change);
   printf("Enter the changeprice:");
   scanf("%d",&change_price);
   inventory[i].price+=change_price;
   inventory[i].on_hand += change;
}  else
   printf("Part not found.\n");
}
void bijiao(int n)
{
        int max,i;                                                ///********************************************************* 
        struct part temp;                                         //左边是排序专用算法冒泡算法														
        if(n){                                                    //先比较两个数，在用一个中间值temp暂时存储一个
          for(i=1,max=0;i<n;i++)                                  //
            if(inventory[i].number>inventory[max].number)         //
                max=i;                                            //**********************************************************
                temp=inventory[n-1];
                inventory[n-1]=inventory[max];
                inventory[max]=temp;
                bijiao(n-1);
 }


}

void print(void)
{
 /* int i;
  int j;
  int middle=0;
  inventory[middle].number=0;
  inventory[middle].name='a';
  inventory[middle].on_hand=0;
  inventory[middle].price=0;
 */
     int i;
     printf("Part Number   Part Name   Part Price "
        "Quantity  on Hand \n");
     bijiao(num_parts);
     for(i=0;i<num_parts;i++)

        printf("%7d     %-13s%10d%11d\n",inventory[i].number,
               inventory[i].name,inventory[i].on_hand,inventory[i].price);


}
                                                                                                
														
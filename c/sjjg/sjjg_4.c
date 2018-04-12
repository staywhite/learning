//线性表的定义和生成；
//熟悉并运用线性表的基本操作；


#include<stdio.h>
#include<malloc.h>
#define OK 1
#define OVERFLOW 0
#define ERROR 0
#define MAXSIZE 10
//定义节点
typedef struct{
   int num;
}number;
//定义表；
typedef struct{
   number *elem;
   int length;
}Sqlist;

int Initlist_Sq(Sqlist *L)
{
    //初始化顺序表；
   (*L).elem = (number*)malloc(MAXSIZE*sizeof(number));
   if (!(*L).elem) {return ERROR;}
   (*L).length=0;
   return OK;
}
//给线性表的元素赋值；
int AppendElem(Sqlist *L,int no){

     if ((*L).length==MAXSIZE)
         {return 0;}
     ((*L).elem[(*L).length]).num=no;
     (*L).length++;
     return 0;

}
//读取表中某一节点的值操作；
int GetElem(Sqlist L,int i){
     if((i<1)||(i>L.length)) return ERROR; //若i非法，则提示非法；
     return L.elem[i-1].num;                //若i合理，则返回顺序表第I个节点的数值
}
//查找操作
int locateElem(Sqlist *L,int e){
    int i;
    for(i=0;i<(*L).length;i++)
        if ((*L).elem[i].num==e) return i+1;  //若查找成功，返回序号i+1；
    return 0;                          //若查找失败，返回0
}
//插入操作
int ListInsert_Sq(Sqlist *L,int i,int e){//这里的i是指要在哪个元素之前插入元素，e是要插入元素的值；
   int j;
  if((i<1)||(i>(*L).length+1)) return ERROR;
  if((*L).length==MAXSIZE)return ERROR;
  for(j=(*L).length-1;j>=i-1;j--)
    (*L).elem[j+1].num=(*L).elem[j].num;            //插入位置及其之后的元素后移；

  (*L).elem[i-1].num=e;                      //将新元素e放入第i个位置
  (*L).length++;                         //表长加一；
  return OK;
}
//删除操作
int ListDelete_Sq(Sqlist *L,int i){
     int j;
     if((i<1)||i>((*L).length)) return ERROR;
     for(j=i;j<=(*L).length-1;j++)
       (*L).elem[j-1].num=(*L).elem[j].num;//被删除的元素之后的元素前移；
     --(*L).length;             //表长减一；
     return OK;
}
//清空顺序表操作
int ClearList(Sqlist *L){
   (*L).length=0;  //
 }
//销毁顺序表操作，释放空间；
int DestroyList(Sqlist *L){
 if((*L).elem)
    free ((*L).elem);
}

int main(void){
    int i;
    Sqlist list1;
    Initlist_Sq(&list1);
    AppendElem(&list1,1);

    AppendElem(&list1,2);

    AppendElem(&list1,3);

    AppendElem(&list1,5);

    AppendElem(&list1,6);

  /* for(i=0;i<list1.length;i++)
    {
         printf("The %d elem  num is:%d\n",i+1,list1.elem[i].num);
         if(((list1.elem[i]).num) == 0)
                break;
    }
  */
    ListInsert_Sq(&list1,4,4);//调用ListInsert_Sq()函数，在第四个元素之前插入元素”4“；
                                                                                           ListDelete_Sq(&list1,4);//调用ListDelet_Sq()函数，删除第四个元素;
       for(i=0;i<list1.length;i++)
    {
         printf("The %d elem  num is:%d\n",i+1,list1.elem[i].num);
         if(((list1.elem[i]).num) == 0)
                break;
    }

  return 0;
}


#include<stdio.h>
struct que
{
  int data;
  struct que * next;
}*front=NULL,*rear=NULL;

struct que* allocateMemory(int val)
{
  struct que *t=(struct que*)malloc(sizeof(struct que));
  t->data=val;
  t->next=NULL;
  return t;
}

void insert(int val)
{
  struct que *t=allocateMemory(val);
  if(rear==NULL)
  {
    front=rear=t;
  }
  else
  {
    rear->next=t;
    rear=t;
  }
}
void delval()
{
  if(front==NULL)
  {
    printf("queue is empty");
  }
  else
  {
    struct que *temp;
    temp=front;
    front=front->next;
    free(temp);
   }
}
int delAtLast()
{
  struct que *temp=front;
  if(temp--NULL)
   return -1;
   else if(temp->next==NULL)
   {
     val=temp->data;
     free(temp);
     front=NULL
   }
}
void show()
{
  struct que *t=front;
  if(t==NULL)
  {
    printf("queue is empty");
  }
  while(t!=NULL)
  {
    printf("%d ",t->data);
    t=t->next;
  }
}

void main()
{
 clrscr();
 insert(10);
 insert(20);
 insert(30);
 insert(40);
 show();
 printf("\n");
 delval();
 show();
// printf("\n%d",delval("%d",temp ->data));
 deleteAll();
 show();
 getch();
}
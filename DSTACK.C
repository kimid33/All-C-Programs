#include<stdio.h>
struct stk
{
  int data;
  struct stk * next;
}*top=NULL;

struct stk* allocateMemory(int val)
{
  struct stk *t=(struct stk*) malloc(sizeof(struct stk));
  t->data = val;
  t->next = NULL;
  return t;
}
void push(int val)
{
  struct stk *t=allocateMemory(val);
  if(top==NULL)
  {
    top=t;
  }
  else
  {
    t->next=top;
    top=t;
  }
}
void addAtLast(int val)
{
  struct stk *t=allocateMemory(val);
  if(top==NULL)
  {
    top=t;
  }
  else
  {
    struct stk *temp=top;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=t;
  }
}
void addAtPos(int val,int pos)
{
  struct stk *t=allocateMemory(val);
  if(top==NULL)
  {
    top=t;
  }
  else
  {
    int c=1;
    struct stk *temp=top;
    while(c<pos-1 && temp->next!=NULL)
    {
      temp=temp->next;
      c++;
    }
    t->next=temp->next;
    temp->next=t;
  }
}

int pop()
{
  int val;
  struct stk *t;
  if(top==NULL)
  {
    return -1;
  }
  val=top->data;
  t=top;
  top=top->next;
  free(t);
  return val;
}
void deleteLastVal()
{
  struct stk *temp=top;
  while(temp->next->next!=NULL)
  {
      temp=temp->next;
  }
  //temp=temp->next;
  temp->next=NULL;
}
void delpos(int pos)
{
  int c=1,count;
  struct stk *temp=top;
  if(count==0)
  {
    printf("stack is empty");
  }
  else if(count==1)
  {
    deleteLastVal();
  }
  else
  {
    while(temp->next!=NULL && c<pos-1)
    {
      temp=temp->next;
      c++;
    }
    temp->next=temp->next->next;
  }
  count--;
}

int peak()
{
  if(top==NULL)
  {
    return -1;
  }
  return top->data;
}
void show()
{
  struct stk *t=top;
  printf("\n");
  while(t!=NULL)
  {
    printf("%d ",t->data);
    t=t->next;
  }
}
void main()
{
  int i;
  clrscr();
  for(i=1;i<=10;i++)
  {
    push(10*i);
  }
  show();
  //printf("\n%d",pop());
  //show();
  //printf("\n%d",peak());
  //show();
  //addAtLast(40);
  //show();
  //addAtPos(60,3);
  //show();
 // deleteLastVal();
  delpos(4);
  show();
  getch();
}

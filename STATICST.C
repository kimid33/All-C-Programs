//#define size 5
#include<stdio.h>
/*int stack[size];
int top=-1;

void push(int val)
{
  if(top==size-1)
    printf("stack is full");
  else
    top++;
    stack[top]=val;
}
void pop()
{
  if(top==-1)
    printf("Stack is empty");
  else
    top--;
}

void show()
{
  int i;
  for(i=top;i>=0;i--)
  {
    printf("%d ",stack[i]);
  }
}

void main()
{
  clrscr();
  push(10);
  push(20);
  push(30);
  push(40);
  show();
  printf("\n");
  pop();
  show();
  printf("\n");
  pop();
  show();
  getch();
} */


			//Dynamic stack(using LinkedList)


struct node
{
  int data;
  struct node *next;
}*head=NULL;

struct node* allocateMemory(int val)
{
  struct node *t=(struct node*)malloc(sizeof(struct node));
  t->data=val;
  t->next=NULL;
  return t;
}
void insertF(int val)
{
  struct node *t=allocateMemory(val);
  if(head==NULL)
    head=t;
  else
  {
    t->next=head;

    head=t;
  }
}
void insertL(int val)
{
  struct node *t=allocateMemory(val);
  if(head==NULL)
  {
    head=t;
  }
  else
  {
    struct node *temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=t;
  }
}

void addAtPos(int val,int pos)
{
  struct node *t=allocateMemory(val);
  if(head==NULL)
  {
    head=t;
  }
  else
  {
    int c=1;
    struct node *temp=head;
    while(c<pos-1 && temp->next!=NULL)
    {
      temp=temp->next;
      c++;
    }
     t->next=temp->next;
     temp->next=t;
  }
}
int deleteval()
{
  int val;
  struct node *t;
  if(head==NULL)
  {
    return -1;
  }
  val=head->data;
  t=head;
  head=head->next;
  free(t);
  return val;
}
void deleteLastVal()
{
  struct node *temp=head;
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
  struct node *temp=head;
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

void reverse()
{
  struct node *p=NULL,*c=head,*n=NULL;
  while(c!=NULL)
  {
    n=c->next;
    c->next=p;
    p=c;
    c=n;
  }
  head=p;
}

void show()
{
  struct node *t=head;
  while(t!=NULL)
  {
    printf("%d ",t->data);
    t=t->next;
  }
}
void main()
{
  clrscr();
  printf("add value:  ");
  insertF(10);
  insertF(20);
  insertF(30);
  insertF(40);
  show();
  printf("\n");

  /*printf("insert at last:  ");
  insertL(40);
  show();
  printf("\n"); */

  /*printf("insert at any position:  ");
  addAtPos(50,3);
  show();
  printf("\n"); */

  /*printf("delete at first:  ");
  deleteval();
  show();
  printf("\n"); */

  /*printf("delete at last:  ");
  deleteLastVal();
  show();
  printf("\n");*/

  /*printf("delete at any position:  ");
  delpos(2);
  show();
  printf("\n");*/

  printf("reverse:  ");
  reverse();
  show();
  getch();
}






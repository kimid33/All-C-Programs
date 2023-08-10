#include<stdio.h>
#define size 5
int que[size];
int front=-1,rear=-1;
void insert(int val)
{
  if(rear==size-1 && front==0 || rear+1==front)
  {
    printf("queue is full");
  }
  if(rear==-1)
  {
    front=rear=0;
  }
  else
  {
    rear=(rear+1)%size;
    que[rear]=val;
  }
}
void display()
{
  int i;
  for(i=front;i!=rear;i=(i+1)%size)
  {
    printf("%d ",que[i]);
  }
}
void main()
{
  clrscr();
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  display();
  getch();
}



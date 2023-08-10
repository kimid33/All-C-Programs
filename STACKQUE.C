#define size 5
int que[size];
int front=-1,rear=-1;
void add(int val)
{
  if(rear==size-1)
  {
    printf("queue is full");
    return;
  }
  if(rear==-1)
  {
    front=rear=0;
  }
  else
  {
    rear++;
    que[rear]=val;
  }
}
void display()
{
  int i;
  if(rear==-1)
  {
   printf("queue is full");
   return;
  }
  for(i=front;i<=rear;i++)
  {
    printf("%d ",que[i]);
  }
}
void main()
{
  clrscr();
  add(10);
  add(20);
  add(30);
  display();
  getch();
}
#define size 5
int stk[size];
int top=-1;
void push(int val)
{
  if(top+1==size)
  {
    puts("stack is full");
    return;
  }
  top++;
  stk[top]=val;
}
int pop()
{
  if(top==-1)
  {
    return -1;
  }
  return stk[top--];
}
//int peak()
//{
  //return stk[top];
//}
int peak()
{
  if(top==-1)
  {
    return -1;
  }
  return stk[top];
}
void show()
{
  int i;
  for(i=top;i>=0;i--)
  {
    printf("%d ",stk[i]);
  }
  printf("\n");
}
void main()
{
  clrscr();
  push(10);
  push(20);
  push(30);
  push(40);
  show();
  //printf("\n%d ",pop());
  pop();
  show();
  printf("%d",peak());
  getch();
}
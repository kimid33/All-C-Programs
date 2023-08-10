#include<stdio.h>
int *ar=NULL;
int size=-1,capacity=0;

void allocateMemory()
{
  int i,*p;
  capacity+=5;
  p=(int*)malloc(capacity*sizeof(int));
  for(i=0;i<=size;i++)
  {
    p[i]=ar[i];
  }
  free(ar);
  ar=p;
}
void add(int val)
{
  if(ar==NULL || capacity==size+1)
  {
    allocateMemory();
  }
  ++size;
  ar[size]=val;
}
int search(int val)
{
  int i;
  for(i=0;i<=size;i++)
  {
   if(ar[i]==val)
    //return val;
    return i;
  }
  return 0;
}
void del(int val)
{
  int t,i;
 t= search(val);
  for(i=t;i<size;i++)
  {
      ar[i]=ar[i+1];
  }
  size--;
}
void update(int index,int val)
{
   ar[index]=val;
}
void show()
{
 int i;
 for(i=0;i<=size;i++)
 {
   printf("%d ",ar[i]);
 }
}
void main()
{
 int i;
 clrscr();
 for(i=1;i<=11;i++)
 {
   add(10*i);
 }
 printf("cap:%d  size:%d\n",capacity,size);
 //show();
 //printf("\n%d",search(30));
 //show();
 //del(50);
 //show();
 update(2,67);
 show();
 getch();
}





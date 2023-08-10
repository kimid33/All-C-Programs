/*void sum(int a)
{
  //static int a=1;            //if a=1 then output will be infinite/stack overflow
  printf("hello %d",a);
  a++;
  if(a<3)
   sum(a);
}
void main()
{
  clrscr();
  sum(1);
  printf("done");
  getch();
} */
/*int f1(int b)
{
  if(b==0)
    return 0;
  else
  {
    printf("a");
    f1(b--);
  }
 // return 1;
}
void main()
{
  int a;
  a=f1(10);
  printf("%d",a);
  getch();
} */

/*void display(int a)
{
 printf("%d ",a);
 if(--a)
	display(a);
 printf("%d ",a);
}
void main()
{
  clrscr();
  display(3);
  getch();
}  */

/*void main()
{
  static int a=1;
  //clrscr();
  printf(" %d",++a);
  if(a<=3)
  main();
  {
    printf(" %d",a);
  }
  getch();
} */

/*int g;
void abc()
{
 static int s;
 auto int a;
 ++g;
 a=++s;
 printf("%d %d %d",a,s,g);
 if(a<=2)
 abc();
 printf("%d %d %d",a,s,g);
}
void main()                       //8 recursion sheet
{
 void xyz();
 ++g;
 abc();
 xyz();
}
void xyz()
{
  static int s=10;
  int a;
  a=s++;
  ++g;
  printf("%d %d %d",a,s,g);
  if(a<=12)
  xyz();
  printf("%d %d %d",a,s,g);
  getch();
} */

/*void xyz()
{
  static int s=5;
  int a;
  a=s++;
  printf("%d %d ",a,s);
  if(a<=7)
   xyz();
  printf("%d %d",a,s);
}
void main()
{
  xyz();
  xyz();
  getch();
}   */

int main()
{
  reverse(1);
}
int reverse(int i)
{
  if(i>5)
   exit(0);
   printf("%d",i);
   return reverse(i++);
   getch();
}






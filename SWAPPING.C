/*void main()
{
  int r;                          //using third variable(sir)
  int a=10,b=20;
  clrscr();
   r=a;
   a=b;
   b=r;
   printf("%d %d",a,b);
   getch();
} */

/*void main()                     //without using third variable
{
  int a=10,b=20;
  clrscr();
  a=a+b;
  b=a-b;
  a=a-b;
  printf("%d %d",a,b);
  getch();
} */

void main()
{
  int a=10,b=20;
  clrscr();
  a=a+b-a;
  b=b+30-a;
  printf("%d %d",a,b);
  getch();
}



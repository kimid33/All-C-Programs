
/*int main()
{
  char chr;
  chr=128;                 //4
  clrscr();
  printf("%d\n",chr);
  getch();
  return 0;
} */

/*void main()
{
  char ch1='A';
  char ch2=65;                         //6
  char ch3='\x41';
  clrscr();
  printf("%d %d %d",ch1,ch2,ch3);
  getch();
}  */

/*void main()                           //7
{
  clrscr();
  printf("\"hi\\nhello\"");
  getch();
}  */

/*void main()                        //8
{
  float f=1.2345E2;
  clrscr();
  printf("%d",f==1.2345E2);
  getch();
} */

/*void main()
{                                           //13
  float f=5;
  float x;
  x=f%2;
  clrscr();
  printf("%f",x);
  getch();
} */

/*void main()
{
  int i;
  long int l;                    //14
  float f;
  clrscr();
  i=32767+1;
  l=32767+1;
  f=32767+1;
  printf("%d %ld %f",i,l,f);
  getch();
} */

/*void main()
{
  a=3.5;                                 //15
  clrscr();
  printf("%f",a);
  getch();
}*/

/*void main()
{                                          //16
  int a=12/5;
  float f=12/5;
  clrscr();
  printf("%d %f",a,f);
  getch();
} */

void main()
{
  int n,sum=0,r,p,t;
  clrscr();                              //armstrong
  printf("Enter number: ");
  scanf("%d",&n);
  t=n;
  while(n!=0)
  {
    r=n%10;
    p=r*r*r;
    sum=sum+p;
    n=n/10;
  }
  if(sum==t)
  {
    printf(" is armstrong");
  }
  else
    printf(" is not armstrong");
    getch();
}


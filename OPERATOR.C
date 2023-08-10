/*void main()
{                          //initialization
 int a=5;
 clrscr();
 printf("%d",a++ + ++a + a++ + a++);
 printf("\n%d",a);
 getch();
} */

/*void main()
{
  int b,a=10;
  b=a++ + ++a + a++ + a++;
  clrscr();
  printf("%d %d",a,b);
  getch();
} */
				//operator sheet

/*void main()
{
  char s1[]="hello";
  char s2[]="dollop";
  int i,j;
  i=strlen(s1);
  j=0;
  clrscr();
  while(j<strlen(s2))
  {
    s1[i]=s2[j];
    i++;
    j++;
  }
  printf("%s",s1);
  getch();
} */

/*char concatstr(char s1[],char s2[])
{
  int i,j;
  i=strlen(s1);
  j=0;
  while(j<strlen(s2))
  {
    s1[i]=s2[j];
    i++;
    j++;
  }
}
void main()
{
  char s1[]="hello";
  char s2[]="dollop";
  char c;
  clrscr();
  c=concatstr(s1,s2);
  printf("%s",s1);
  getch();
} */

/*void main()
{
  int x,a=15;
  clrscr();
  x= - - - -a--;
  printf("%d %d",x,a);
  getch();
}   */

/*void main()
{
  int i=0;
  clrscr();                        //6
  if(i==0)
  {
    i=((5,(i=3)),i=1);
    printf("%d",i);
  }
  else
   printf("equal");
   getch();
} */


/*void main()
{                              //runtime error(divide error)
  int x=3,y=2;
  int z=x/= y%=2;
  printf("%d",z);
  getch();
} */

/*void main()
{                                            //4
  clrscr();
  printf("%d",10?0?20?35:45:55:65);
  getch();
} */

/*void main()
{                                         //5
  int x=2,y=2;
  float f=y+x/=x/y;
  clrscr();
  printf("%d %f\n",x,f);
  getch();
} */

/*void main()
{
  int x,a=3;
  x=+ +a+ + +a + +5;
  clrscr();
  printf("%d %d",x,a);
  getch();
} */

/*void main()                           //42
{
  int num,i=0;
  num=-++i + ++-i;
  clrscr();
  printf("%d",num);
  getch();
} */

/*void main()
{                                 /43
  int x,i=2;
  x=~-!++i;
  clrscr();
  printf("%d",x);
  getch();
} */

/*void main()
{                                    //44
  int y=1,x=0;
  int l=(y++,x++)?y:x;
  clrscr();
  printf("%d\n",l);
  getch();
} */

/*void main()
{                                      //45
  int k=8;
  int m=7;
  int z=k<m?k++:m++;
  clrscr();
  printf("%d",z);
  getch();
} */

/*void main()                        //46
{
  int x=2,y=2;
  x/=x/y;
  clrscr();
  printf("%d\n",x);
  getch();
} */

/*void main()
{                                  //47
  int x=1,y=0;
  x&&=y;
  printf("%d\n",x);
  getch();
} */

/*void main()                         //48
{
  int x=1,y=1;
  clrscr();
  printf("%d %d %d",x,y,x=1&&y=0);
  getch();
} */

/*void main()                            //49
{
  char a='a';
  int x=(a%10)++;
  clrscr();
  printf("%d\n",x);
  getch();
} */

/*void main()                          //50
{
  int a=1,b=1,d=1;
  clrscr();
  printf("%d %d %d",++a + ++a + a++,a++ + ++b,++d + d++ + a++);
  getch();
} */

/*void main()
{
  int a=1;                 //51
  a
  //clrscr();
  printf("%d",a);
  getch();
} */

/*void main()
{
  int i;
  i=1;                         //52
  i=i+2*i++;
  clrscr();
  printf("%d",i);
  getch();
} */

/*void main()
{                          //53
  float a=10;
  a/=5+3;
  clrscr();
  printf("%f",a);
  getch();
} */

/*void main()                    //54
{
  clrscr();
  printf("%d",-0.00002&&4);
  getch();
} */

/*void main()
{
  float f=12/5*1.0;
  clrscr();
  printf("%f",f);
  getch();
} */

void main()
{
  int i=4*6-3/2>1%2-4^3;
  clrscr();
  printf("%d",i);
  getch();
}

/*void main()
{
  int a=10;
  int b=30;
  int c=20;
  int *p=&c;
  clrscr();
  printf("%u",*p);
  p++;
  printf("\n%d",*p);
  getch();
}  */

/*int fun(int *p)
{
  printf(" %u ",*p);
  ++*p;
}
void main()
{
  int a=10;
  int b=20;
  int *p=&b;
  clrscr();
  printf("\n%u",*p);
  p++;
  fun(p);
  printf("\n%d",*p);
  getch();
} */

/*float fun(float *p)
{
  printf("%f",*p);
  ++*p;
}
void main()
{
 float a=10;
 float b=30;
 float *p=&b;
 clrscr();
 fun(p);
 printf("\n%f",*(p+1));
 getch();
}*/

/*void xyz(int x)
{
 printf("%d ",x);
 if(x)
  xyz(x-1);
  printf("%d ",x);
 }
 void abc(int a)
 {
   printf("%d ",a);
   xyz(a);
   if(a)
   abc(a-1);
   printf("%d ",a);
 }
void main()
{
  clrscr();
  abc(2);
  getch();
}   */

/*void xyz(int *ptr)
{
  ++*ptr;
  if(*ptr<=10)
  xyz(++ptr);
  ++*ptr;
}
void main()
{
  int arr[]={2,4,8,16};
  int i;
  xyz(arr+1);
  for(i=0;i<5;i++)
  printf("\n%d",arr[i]);
  getch();
}    */

/*void main()
{                             //9
  static int a=1;
  printf("\n%d",++a);
  if(a<=3)
  main();
  printf("\n%d",a);
  getch();
}  */

/*void change(int p1,int*p2)      //12
{
  ++p1;
  ++*p2;
}
void main()
{
  int x=10,y=20;
  change(x,&y);
  printf("\n%d %d",x,y);
  getch();
} */

/*void main()
{
  int arr[5]={10,20};
  printf("\n%d %d",1[arr],arr[0]);
  getch();
}  */

/*void main()
{
  int arr1[5]={10,20};
  int arr2[5];
  printf("\n%d %d",arr1[3],arr2[3]);
  getch();
}*/

/*void main()
{
 int a[5]={10,20,30,40,50};
 int *ptr;
 clrscr();
 ptr=a+1;
 printf("%d %d %d",++*ptr,*ptr++,*++ptr);
 getch();
}*/

/*void main()
{
  char str[5]={'a','b','c','d'};
  printf("%s",str);
  getch();
} */

/*void main()
{
  int a[5]={6,16,26};
  ++*a;
  ++*(a+1);
  ++a[1];
  printf("\n%d %d",a[0],a[1]);
  getch();
}*/

/*void main()
{
  char str[]="abcdefghxyz";
  printf("\n%s",str);
  printf("\n%s",str+4);
  printf("\n%s",str+8);
  getch();
} */

/*void main()
{
  char str[]="dollop info";
  str[1]++;
  str[2]=100;
  puts(str);
  getch();
}    */

void main()
{
  char str[]="abcdef";
  str[3]=0;
  puts(str);
  getch();
}













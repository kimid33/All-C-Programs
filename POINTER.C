/*void fun(int *a)
{
  *a=40;
  printf("\n%d\n",*a);
}
void main()
{
  int a=10,b=20;
  clrscr();
  fun(&a);
  printf("%u",a);
  getch();
} */

/*int revnum(int n)
{
  int r,s=0;
  while(n!=0)
  {
    r=n%10;
    s=s*10+r;
    n=n/10;
  }
  return s;
}
void main()
{
  int n1=1234;
  int s=0,r,n2=revnum(n1);
  clrscr();
  while(n1!=0)
  {
    if(s==0 || n1<10)
      r=n1%10;
    else
      r=n2%10;
      s=s*10+r;
      n1=n1/10;
      n2=n2/10;
  }
   printf("%d",s);
   getch();
} */

/*void main()
{
  int a=1,2,3,4,5;
  clrscr();
  printf("%d",a);
  getch();
} */


/*void main()                            //3(pointer)
{
  int a[]={10,20,30,40},*p;
  p=a+1;
  clrscr();
  printf("%d %d %d %d %d\n",-1[p],p[-1],0[p],p[1],*(p+2));
  getch();
} */

/*void main()
{
  int a=10;
  int*p=&a;
  int**pp=&p;
  ++*p;
  ++**pp;
  a*=a-2;
  clrscr();
  printf("\n%d",a);
  getch();
}*/

/*void main()                          //1
{
  int arr[];
  arr[1]=10;
  clracr();
  printf("%d",arr[0]);
  getch();
} */

/*void main()                              //2
{
  int arr[2]={10,20,30,40};
  clrscr();
  printf("%d",*(arr+2));
  getch();
} */

/*void main()
{                                             //3
  int arr[2]={10,20};
  arr[2]=30;
  arr[3]=40;
  clrscr();
  printf("%d",*(arr+3));
  getch();
} */

/*void main()
{
  int arr[2]={10,20};                    //4
  *arr=30;
  *(arr+1)=40;
  clrscr();
  printf("%d %d",arr[0],1[arr]);
  getch();
} */

/*void main()
{                                            //5
  int a=1;
  void xyz(int,int);
  xyz(++a,a++);
  xyz(a++,++a);
  clrscr();
  printf("\n%d",a);
}
void xyz(int x,int y)
{
  printf("%d %d",x,y);
  getch();
} */

/*void abc()
{                                               //6
  ++a;
}
void main()
{
  int a=1;
  abc();
  print("\n%d",a);
  getch();
}*/

void display(int a)
{		                          //7
  printf("\n%d ",a);
  if(--a)
    display(a);
    printf("%d ",a);
}
void main()
{
  clrscr();
  display(4);
  getch();
}

/*void main()
{                                     //9
  static int a=1;
  clrscr();
  printf("\n%d",++a);
  if(a<=3)
  main();
  printf("\n%d",a);
  getch();
} */

/*void main()
{
  int a=10;                             //11
  int *p=&a;
  int **pp=&p;
  ++*p;
  ++**pp;
  a*=a-2;
  clrscr();
  printf("\n%d",a);
  getch();
} */

/*void change(int p1,int*p2)
{
  ++p1;                         //12
  ++*p2;
}
void main()
{
  int x=10,y=20;
  change(x,&y);
  clrscr();
  printf("\n%d %d",x,y);
  getch();
} */

/*void main()
{
  int arr[4][8]={10,20,30};
  clrscr();
  printf("\n%d",sizeof(arr));
  printf("\n%d",sizeof(arr[1]));
  printf("\n%d",sizeof(arr[2][0]));
  getch();
} */


/*void main()
{                                    //13(array and pointer)
  int a[]={7,18,29};
  int*p;
  p=a;
  ++p;
  clrscr();
  printf("%d %d %d",p[-1],p[0],p[1]);
  getch();
} */

/*void main()
{                                   //19
  int arr[5]={10,20};
  clrscr();
  printf("\n%d %d",1[arr],arr[0]);
  getch();
} */

/*void main()
{                                        //21
  int arr1[5]={10,20};
  int arr2[5];
  clrscr();
  printf("\n%d %d",arr1[3],arr2[3]);
  getch();
} */

/*void main()
{                                      //22
  int a[2];
  int i;
  clrscr();
  for(i=0;i<10;i++)
   a[i]=i*i;
  printf("\n%d",a[3],a[4]);
  getch();
} */

/*void main()
{                                        //23
  int a[5]={10,20,30,40,50};
  int b[5]={3,13};
  b=a;
  clrscr();
  printf("\n%d",b[1]);
  getch();
} */

/*void main()                             //24
{
  int a[5]={6,16,26};
  ++*a;
  ++*(a+1);
  ++a[1];
  clrscr();
  printf("\n%d %d",a[0],a[1]);
  getch();
}    */

/*void main()                                   //25
{
  int a[5]={10,20,30,40,50};
  int*ptr;
  ptr=a+1;
  clrscr();
  printf("%d %d %d",++*ptr,*ptr++,*++ptr);
  getch();
} */

/*void main()
{                                       //26
  char str[5]={'a','b','c','d'};
  clrscr();
  printf("%s ",str);
  getch();
} */

/*void main()                         //27
{
  char str[]="abcdefghxyz";
  clrscr();
  printf("\n%s",str);
  printf("\n%s",str+4);
  printf("\n%s",str+8);
  getch();
} */

/*void main()
{                                    //28
  char str[]="dollop info";
  str[1]++;
  str[2]=100;
  clrscr();
  puts(str);
  getch();
} */

/*void main()
{                                         //29
  char str[]="abcdef";
  str[3]=0;
  clrscr();
  puts(str);
  getch();
} */

/*void display(char *str)
{                                            //30
  puts(str);
  if(*str)
    display(str+1);
    puts(str);
}
void main()
{
  char st[]="abc";
  clrscr();
  display(st);
  getch();
} */

/*void main()                           //31
{
  char str1[]="hell";
  char str2[]="abc";
  str1=str2;
  clrscr();
  puts(str1);
  getch();
} */

/*void main()                          //32
{
  char str[]="abcdef";
  ++str;
  ++*str;
  clrscr();
  puts(str);
  getch();
} */

/*void main()
{                                         //33
  char str[]="Java";
  clrscr();
  printf("%d %d",sizeof(str),strlen(str));
  getch();
} */

/*void main()
{                                             //34
  char str1[20]="hell Dollop info";
  char str2[20]="hell Dollopinfo";
  strcpy(str1+6,str2+6);
  clrscr();
  puts(str1);
  puts(str2);
  getch();
} */

/*char*change(char*ptr)
{
  ++*ptr;                             //35
  ++ptr;
  ptr+=2;
  *ptr+=2;
  return ptr-2;
}
void main()
{
  char name[]="hello rahul";
  clrscr();
  puts(change(name));
  puts(name);
  getch();
} */

/*void main()
{
  char str[40]="welcome";
  char *p;
  p=str+7;
  strcpy(p,"java");
  clrscr();
  puts(p);
  puts(str);
  getch();
} */

/*void main()
{
  char s1[40]="abcdef";
  char *s2="Java pr Jp";
  char *s3="javapr";
  s3=s2+2;
  s2=s1+2;
  ++*s2;
  ++s3;
  clrscr();
  puts(s1);
  puts(s2);
  puts(s3);
  getch();
} */

/*void main()
{
  char str[40]="abc78910112";
  strrev(str+3);
  clrscr();
  puts(str);
  getch();
}*/

/*void main()
{
  char s1[40]="abcdf";
  char s2[]="xyz";
  strcat(s1+2,s2+1);
  clrscr();
  puts(s1);
  puts(s2);
  getch();
} */



 /*void main()
{
  int i;                   //i+=2==:-i=i+2
  clrscr();                                     //1
  for(i=1;i<=15;i+=2)
  {
    printf(" %d hi\n",i);
  }
  getch();
} */

/*void main()
{                              //2
  int i,fact=1,n=5;
  clrscr();
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
    printf("factorial is: %d\n",fact);
  getch();
} */

/*void main()
{
  int i;                          //3
  clrscr();
  for(i=1;i<=50;i++)
  {
    if(i%2==0)
    {
      printf("even= %d ",i);
      printf("\n");
    }
    else if(!(i%2==0))
    {
      printf("odd= %d ",i);
    }
  }
    getch();
}*/

void main()
{
  int i,j;                           //4
  clrscr();
  for(i=1;i<=10;i++)
  {
   for(j=2;j<=10;j++)
   {
    printf("%d*%d=%d ",i,j,i*j);
   }
  }
  getch();
}

/*void main()
{
  int i,sum=0,add=0;                    //5
  clrscr();
  for(i=1;i<=10;i++)
  {
     if(i%2==0)
     {
       sum=sum+i;
       printf("even no:=%d",i);
       printf("\n");
     }
     else if(!(i%2==0))
     {
       add=add+i;
       printf("odd no:=%d",i);
       printf("\n");
     }
  }
  printf("sum of even no is:=%d",sum);
  printf("\n");
  printf("sum of odd no is:=%d",add);
  printf("\n");
  printf("Final result is:%d+%d=%d",sum,add,sum+add);
  getch();
} */

/*void main()
{                                   //6
  int i,j;
  clrscr();
  for(i=2;i<=40;i++)
  {
    for(j=1;j<=10;j++)
    {
      printf("%d  ",i*j);
    }
    printf("\n");
    }
    getch();
} */

/*void main()
{
  int i,num1,num2,j,fact=1,f=1;                  //7
  clrscr();
  printf("Enter first numbers: ");
  scanf("%d",&num1);
  for(i=1;i<=num1;i++)
  {
    fact=fact*i;
  }
    printf("factorial of first number is: %d\n",fact);
    printf("\n");
    printf("Enter second number: ");
    scanf("%d",&num2);
  for(j=1;j<=num2;j++)
  {
    f=f*j;
  }
    printf("factorial of second number is: %d",f);
  getch();
} */

/*void main()                   //tornary operator
{
  int a=10,b=5;
  clrscr();
  printf("%d",a>b?a:b);
  getch();
} */

/*void main()                   //8
{
  int i,n=15;
  clrscr();
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      printf("%d\n",i);
    }
  }
  getch();
} */

/*void main()
{                                   //9
  int i,n=50;
  clrscr();
  for(i=1;i<=n;i++)
  {
    if(i%3==0 && i%5==0)
    {
     printf("%d ",i);
    }
  }
  getch();
}*/

/*void main()
{                                 //10
  int i,n1=12,n2=15,n3=25;
  clrscr();
  for(i=1;i<=10;i++)
  {
    printf("%d*%d=%d\n",n1,i,n1*i);
    printf("\t");
    printf("%d*%d=%d \t",n2,i,n2*i);
    //printf("\n");
    printf("%d*%d=%d\n",n3,i,n3*i);
  }
  getch();
}  */

/*void main()
{
 int i,n=100;                    //11
 clrscr();
 for(i=1;i<=n;i++)
 {
   if(i%2==0 && i%4==0)
   {
     printf("%d ",i);
   }

   //if(i%3==0 || i%5==0)
   //{
     //printf("%d ",i);
   //}
 }
 getch();
}*/

/*void main()
{                              //12
  int i,j,n1=122;
  clrscr();
  for(i=97;i<=n1;i++)
  {
    printf("%c ",i);
  }
  getch();
} */

/*void main()
{                                  //13
  int i,n=90;
  clrscr();
  for(i=65;i<=n;i++)
  {
    printf("%c ",i);
  }
  getch();
} */

/*void main()                          //14
{
  int i,n=256;
  clrscr();
  for(i=1;i<=n;i++)
  {
    printf("%c ",i);
  }
  getch();
} */

/*void main()
{
  int sum=0,i,n=28;                        //15 perfect no
  clrscr();
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
   if(sum==n)
      printf("%d number is perfect..",n);
   else
      printf("%d number is not perfect..",n);
  getch();
} */

/*void main()
{                                            //16 prime no
  int n=12,i;
  clrscr();
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      printf("%d not prime",n);
      break;
    }
  }
    if(!(n%i==0))
      printf("%d is prime",n);
  getch();
} */

/*void main()
{                                    //17
  int n,i;
  clrscr();
  for(i=1;i<=47;i++)
  {
    printf("%c  ",i);
  }
  getch();
} */

/*int fact (int n)
{                                      //18 strong no
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
   return fact;
}
void main()
{
  int n=153,r,sum=0,t;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+fact(r);
    n=n/10;
  }
  if(t==sum)
    printf("%d is strong",t);
  else
    printf("%d is not strong",t);
    getch();
} */

/*void main()
{
  int n=371,p,r,sum=0,t;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    p=r*r*r;
    sum=sum+p;
    n=n/10;
  }
   if(sum==t)
     printf("%d is armstrong number..",t);
   else
     printf("%d is not armstrong number..",t);
   getch();
} */

/*void main()
{
  long int n=12345,sum=0,r;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    sum=sum*10+r;
    n=n/10;
    }
   printf("reverse no is =%ld",sum);

   getch();
} */

/*void main()                             //palindrome prg
{
  long int n=12321,r,t,rev=0;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
  if(t==rev)
    printf("is palindrome");
  else
    printf("is not palindrome");
  getch();
} */

/*void main()
{                                      //fibonacci series(sir)
  int a=0,b=1,next,i;
  clrscr();
  printf("%d %d ",a,b);
  for(i=2;i<20;i++)
  {
     next=a+b;
     printf("%d ",next);
     a=b;
     b=next;
  }
  getch();
} */

/*void main()
{                                    //sum of digit of a number(sir)
  int n=5234,sum=0,r;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
   printf("%d ",sum);
   getch();
} */

/*void main()
{
  int a=0,b=1,next,i;
  clrscr();
  printf("%d %d ",a,b);
  for(i=2;i<10;i++)
  {
    next=a+b;
    printf("%d ",next);
    a=b;
    b=next;
  }
  getch();
} */


/*void main()
{
  int i=10;
  clrscr();
  printf("%d",i>>2);
  getch();
} */
/*int isprime(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {                                  //prime no (sir)
    if(n%i==0)
     return 0;
  }
    return 1;
}
void main()
{
  int n=13;
  clrscr();
  if(isprime(n)==1)
  {
    printf("%d is prime no",n);
  }
  else
    printf("%d is not prime no",n);
    getch();
} */

/*int pow(int n,int p)
{
 int i,s=1;
 for(i=1;i<=p;i++)
 {
   s=s*n;                         //Armstrong (sir)
 }
  return s;
}
int CountDigit(int n)
{
  int c=0;
  while(n!=0)
  {
    c++;
    n=n/10;
  }
   return c;
}
void main()
{
  int t,c,i,n=1634,s=0,r;
  clrscr();
  c=CountDigit(n);
  t=n;
  while(n!=0)
  {
    r=n%10;
    s=s+pow(r,c);
    n=n/10;
  }
  if(s==t)
  {
    printf("%d is armstrong",t);
  }
  else
  {
    printf("%d is not armstrong",t);
  }
   getch();
} */

/*int pow(int n,int p)
{
  int i,s=1;
  for(i=1;i<=p;i++)
  {
    s=s*n;
  }
   return s;
}
void main()
{
  int i;
  clrscr();
  printf("%d",pow(2,4));
  getch();
} */

/*int pow(int n,int p)
{
  int i,s=1;
  for(i=1;i<=p;i++)                  //power fun series(sir)
  {
    s=s*n;
  }
   return s;
}
void main()
{
  int i;
  clrscr();
  for(i=0;i<=9;i++)
  {
    printf("%d ",pow(3,i));
  }
  getch();
} */

/*int pow(int n,int p)
{
  int i,s=1;
  for(i=1;i<=p;i++)
  {
    s=s*n;
  }
   return s;
}
void main()
{
  int i;
  clrscr();
  for(i=0;i<=14;i++)
  {
    printf("%d ",pow(2,i));
  }
  getch();
} */

/*int isprime(int n)
{
  int i;
  if(n<2)
  return 0;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      return 0;
    }
  }
  return 1;
}
void main()
{
  int n,i;
  clrscr();
  for(i=1;i<=50;i++)
  {
    if(isprime(i)==1)
    {
      printf("%d ",i);
    }
  }
    getch();
} */

/*int isprime(int n)
{
 int i;
 if(n<2)
 return 0;
 for(i=2;i<=n/2;i++)
 {
   if(n%i==0)
   {
     return 0;
   }
 }
    return 1;
}
void main()
{
  int i;
  clrscr();
  for(i=1;i<=1000;i++)
  {
    if(isprime(i)==1)
    {
      printf("%d ",i);
    }
  }
  getch();
} */

/*int isprime(int n)
{
  int i;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
      return 0;
  }
  return 1;
}

void main()
{
  int n=155;
  clrscr();
  if(isprime(n)==1)
  {
    printf("%d is prime no",n);
  }
  else
    printf("%d is not prime no",n);
    getch();
} */

/*void main()
{                                          //table(sir)
  int n1,n2,i,j;
  clrscr();
  printf("Enter number: ");
  scanf("%d %d",&n1,&n2);
  for(j=1;j<=10;j++)
  {
    for(i=n1;i<=n2;i++)
    {
      printf("%4d",i*j);
    }
      printf("\n");
  }
  getch();
} */

/*int revInt(int n)
{                           //reverse first and last digit(sir)
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
  int n=12532,r,rev,s=0;
  clrscr();
  rev=revInt(n);
  while(n!=0)
  {
    if(s==0 || n<10)
    {
      r=n%10;
    }
    else
    {
      r=rev%10;
    }
     s=s*10+r;
     n=n/10;
     rev=rev/10;
  }
    printf("%d",s);
    getch();
} */

/*int revInt(int n)
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
  int n=14252,rev,r,s=0;
  clrscr();
  rev=revInt(n);
  while(n!=0)
  {
    if(!(s==0 || n<10))
    {
      r=n%10;
    }
    else
    {
      r=rev%10;
    }
     s=s*10+r;
     n=n/10;
     rev=rev/10;
    }
     printf("%d",s);
     getch();
} */

/*void main()                  //reverse number
{
  int n=12342,t=0,r;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    t=t*10+r;
    n=n/10;
  }
  printf("%d",t);
  getch();
} */

/*int pow(int n,int p)
{
  int i,s=1;
  for(i=1;i<=p;i++)
  {
    s=s*n;
  }
  return s;
}
int countDigit(int n)
{
  int c=0;
  while(n!=0)
  {
    c++;
    n=n/10;
  }
  return c;
}

void main()
{
  int n=155,r,c,t,sum=0;
  clrscr();
  c=countDigit(n);
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+pow(r,c);
    n=n/10;
  }
  if(sum==t)
  {
    printf("%d is armstrong number",t);
  }
  else
  {
    printf("%d is not armstrong number",t);
  }
  getch();
}*/



























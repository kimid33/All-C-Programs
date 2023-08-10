/*void main()
{                                   //print even numbers
  int n=1234,i;
  clrscr();
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      printf("%d ",i);
    }
  }
  getch();
} */

/*void main()
{                                  //print odd numbers
  int n=1234,i;
  clrscr();
  for(i=1;i<=n;i++)
  {
    if(!(i%2==0))
    {
      printf("%d ",i);
    }
  }
  getch();
} */

/*void main()
{                                         //reverse
  int n=1234,t=0,r;
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

/*int revInt(int n)                           //reverse first and last digit
{
  int t=0,r;
  while(n!=0)
  {
    r=n%10;
    t=t*10+r;
    n=n/10;
  }
  return t;
}

/*void main()
{
  int n=1234,rev,r,s=0;
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

/*void main()
{                                       //generic root
   int sum=0,n=1234,r;
   clrscr();
   L:
   while(n!=0)
   {
     r=n%10;
     sum=sum+r;
     n=n/10;
   }
   if(sum>9)
   {
     n=sum;
     sum=0;
     goto L;
   }
    printf("%d",sum);
    getch();
} */

/*void main()
{                                   //palindrome
  int n=1551,r,t,sum=0;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }
  if(sum==t)
    printf("%d is palindrome",t);
  else
    printf("%d is not palindrome",t);
    getch();
} */

/*void main()
{                                           //addition
 int n=1234,r,sum=0;
 clrscr();
 while(n!=0)
 {
   r=n%10;
   sum=sum+r;
   n=n/10;
 }
 printf("sum is %d",sum);
 getch();
} */

/*void main()
{                                             //check no is perfect or not
  int n=1234,t,i,sum=0;
  clrscr();
  t=n;
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      sum=sum+i;
    }
  }
    if(sum==t)
      printf("%d is perfect no",t);
    else
      printf("%d is not perfect no",t);
  getch();
} */

/*void main()                                //check no is even or odd
{
  int n=1234;
  clrscr();
  if(n%2==0)
  {
    printf("%d is even number",n);
  }
  else if(!(n%2==0))
  {
    printf("%d is odd number",n);
  }
  getch();
} */

/*int fact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
   fact=fact*i;
  }
  return fact;
}

void main()
{
  int n=1234,r,t,sum=0;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+fact(r);
    n=n/10;
  }
  if(sum==t)
    printf("%d is strong no.",t);
  else
    printf("%d is not strong no.",t);
    getch();
} */

/*int isprime(int n)
{                                          //prime or not
  int i;
  for(i=1;i<=n/2;i++)
  {
    if(!(i==0 && i==n))
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
  int n=11;
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
    s=s*n;
  }
  return s;
}

int countdigit(int n)
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
  int n=1234,r,sum=0,t,c;
  clrscr();
  c=countdigit(n);
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+pow(r,c);
    n=n/10;
  }
  if(sum==t)
    printf("%d is armstrong no",t);
  else
    printf("%d is not armstrong no",t);
    getch();
} */

/*void main()
{
  int n=1234,r,p=1;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    p=p*r;
    n=n/10;
  }
  printf("%d",p);
  getch();
} */

/*void main()                              //count
{
  char str[]="0000";
  int count=0,i;
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
   if(str[i]>strlen(str))
   {
    count++;
   }
  }
  printf("%d",count);
  getch();
} */

/*int fact(int d)
{
  int i,f=1;
  for(i=1;i<=d;i++)
  {
   f=f*i;
  }
  return f;
}

void main()
{
  int n=1234,r,d,sum=0;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
  printf("sum of digits is %d",sum);
  d=sum/2;
  printf("\nand factorial of sum no is %d",fact(d));
  getch();
} */

/*void main()
{
  int n=1234,count=0;
  clrscr();
   if(n==0)
   {
  printf("%d",count+1);
  }
  if(count==0)
  {
    while(n!=0)
    {
      count++;
      n=n/10;
    }
  }
  printf("\n%d",count);
  getch();
} */

/*void main()
{
  clrscr();
  printf("%d",-11<<-65526);
  getch();
} */

void main()
{
 clrscr();
 printf("%ld",-11<<-2);
 getch();
}
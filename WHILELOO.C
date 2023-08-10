/*void main()                       //sum of digit of a number
{
  int n=3894,sum=0,r;
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
{                               //even odd numbers with using while loop
  int n;
  n=1;
  clrscr();
  while(n<=10)
  {
   n++;
   if(n%2==0)
   {
    printf("even no=%d ",n);
   }
   else if(!(n%2==0))
   {
   printf("\nodd no=%d ",n);
   }
  }
  getch();
} */

/*void main()
{
  int n=1251,rev=0,r,t;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    rev=rev*10+r;
    n=n/10;
  }
   if(rev==t)
     printf("is palindrome");
   else
     printf("is not palindrome");
    getch();
} */

/*int fact (int n)
{                                    //strong number program
  int i,f=1;
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
   return f;
}
void main()
{
  int t,n=155,r,sum=0;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;

    sum=sum+fact(r);
    n=n/10;
  }
  if(t==sum)
    printf("%d is strong number",t);
  else
    printf("%d is not strong number",t);
    getch();
} */

/*void main()
{                                  //reverse no
  int t=0,r,n=123;
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

void main()
{
  int n=6389,r,sum=0;
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
}

/*void main()
{                                     //neon number
  int n,r,p,t,sum=0;
  clrscr();
  printf("Enter a number: ");
  scanf("%d",&n);
  t=n;
  p=n*n;
  while(p!=0)
  {
   r=p%10;
   sum=sum+r;
   p=p/10;
  }
  if(t==sum)
    printf("%d is neon no",t);
  else
    printf("%d is not neon no",t);
  getch();
}*/
















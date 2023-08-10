/*int fact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
  fact=fact*i; //for find factorial no
  }
  return fact;
}
void main()
{
  int n,sum=0,r,f;
  clrscr();
  printf("Enter a number:",n);
  scanf("%d",&n);
  f=n;
  while(n!=0)    //condition check
  {
    r=n%10;        //remainder
    sum=sum+fact(r);
    n=n/10;
  }
  if(sum==f)
  {
    printf("is strong number");
  }
  else
  {
    printf("is not strong number");
  }
  getch();
} */

/*void main()
{
int i,n,sum=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
if(n%i==0)
{
sum=sum+i;
}                    //perfect number
}
if(sum==n)
{
printf(" %d no is perfect",n);
}
else
{
printf("%d no is not perfect",n);
}
getch();
}*/
int isfact (int n)
{
int i,fact=1;
clrscr();
 for(i=1;i<=n;i++)
 {
   fact=fact*i;
  }
 return fact;
}
void main()
{
int f,r,n=148,sum=0;
clrscr();
f=n;
 while(n!=0)
 {
 r=n%10;
 sum=sum+isfact(r);
 n=n/10;
 }
if(sum==f)
{
  printf("is strong number");
}
else
{
  printf("is not strong");
}
getch();
}



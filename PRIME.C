/*void main()
{
  int i,n=28,f=0;
  clrscr();
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
       f++;
       printf("is not prime");
       break;
    }
  }
  if(f==0)
  printf("is prime");
  getch();
}*/

/*void main()
{
int n,i,f=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
printf("number is not prime");
f++;
break;
}
}
if(f==0)
printf("number is prime");
getch();
}*/

void main()
{
int i,n,f=0;
clrscr();
printf("Enter a number: ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f++;
printf("%d number is not prime",n);
break;
}
}
if(f==0)
{
printf("%d number is prime",n);
}
getch();
}




/*void main()
{
int i,a,sum=0,n=1234,f,fact;
clrscr();
f=n;
while(n!=0)
{
int fact=1;
a=n%10;
for(i=1;i<=a;i++)
{
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
printf("factorial no %d: %d",f,sum);
getch();
}*/

void main()
{
int n,r,avg,f=0,sum=0;
clrscr();
printf("Enter number");
scanf("%d",&n);
 while(n!=0)
 {
  r=n%10;
  f++;
  sum=sum+r;
  n=n/10;
  }
 avg=f/sum;
 printf("%d",avg);
 getch();
}







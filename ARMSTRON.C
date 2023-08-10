void main()
{
int n=154,sum=0,p,r,t;
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
{
printf("number is strong");
}
else
{
printf("number is not strong");
}
getch();
}
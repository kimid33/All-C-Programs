/*int fact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}                        //sum of factorial
void main()
{
 int a[]={1,2,8,4,6};
 unsigned int size,i,sum=0;
  clrscr();
  size = sizeof(a)/sizeof(int);
  for(i=0;i<size;i++)
  {
    if(a[i]%2==0)
    {
      sum=sum+fact(a[i]);
    }
  }
  printf("%u",sum);
  getch();
}*/

void main()
{
int n[3];
int i,j,sum=0,f=0,size;
size=sizeof(n)/sizeof(int);
clrscr();
printf("Enter three number: ");
scanf("%d %d %d",&n[0],&n[1],&n[2]);
  for(i=0;i<size;i++)
  {
    sum=sum+n[i];
  }
  for(j=2;j<=sum/2;j++)
  {
    if(sum%j==0)
    {
      f++;
      printf("is not prime");
      break;
    }
  }
  if(f==0)
    printf("is prime");
  getch();
}











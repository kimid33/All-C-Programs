/*void main()
{
int a[] = {2,4,6,8,5};
int i,sum=0;
clrscr();
 for(i=0;i<=5;i++)
 {
   sum=sum+a[i];
 }
 printf("%d",sum);
 getch();
}*/            //Enter five number and no is even then find sum of factroial..

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
int a[]={1,2,8,4,6};
unsigned int size,i,sum=0;
clrscr();
size=sizeof(a)/sizeof(int);
 for(i=0;i<size;i++)
 {
   if(a[i]%2==0)
   {
     sum=sum+fact(a[i]);
   }
 }
printf("%u ",sum);
getch();
}*/
    //Enter three number and check its addition are prime or not.
/*void main()
{
int a[3];
int n,i,j,sum=0,f=0;
clrscr();
printf("Enter three numbers:");
scanf("%d %d %d",&a[0],&a[1],&a[2]);
 for(i=0;i<3;i++)
 {
   sum=sum+a[i];
 }
 for(j=2;j<sum;j++)
 {
   if(sum%j==0)
   {
     f++;
     break;
   }
 }
 if(f==0)
   printf("is prime");
 else
   printf("is not prime");
 getch();
} */

/*void main()
{
int a[]={2,4,5,7,8,6,4,9};
int i,sum=0;
clrscr();
 for(i=0;i<=8;i++)
 {
   sum=sum+a[i];
 }
printf("%d",sum);
getch();
} */

//Enter 10 numbers and find addition of all perfect number..
void main()
{
  int a[10];
  int size,i,n,sum=0;
  size=sizeof(a)/sizeof(int);
  clrscr();
  printf("Enter ten numbers: ");
  scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],a[6],&a[7],&a[8],&a[9]);
  for(i=1;i<=10;i++)
  {
    if(n%a[i]==0)
    {
      sum=sum+a[i];
    }
  }
    if(sum==n)
    {
      sum=
      printf(" addition of all perfect number: %d",sum);
    }
  //  else
    //{
      //printf("addition are not perfect:",sum);
   /// }
  getch();
}







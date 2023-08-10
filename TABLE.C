/*#include<stdio.h>
void main()
{
int i,j,number,size;
clrscr();
printf("Enter Starting Point Of Table:");
scanf("%d",&number);
printf("\nEnter Ending Point Of Table:");
scanf("%d",&size);
for(i=number;i<=size;i++)
{
   printf("\n");
   for(j=1;j<=10;j++)
   {
     printf("%d\t",j*i);
   }
}

getch();
}*/

void main()
{
int i,j,n,size;
clrscr();
printf("Enter first number: ");
scanf("%d",&n);
printf("Enter second number");
scanf("%d",&size);
for(i=n;i<=size;i++)
{
  for(j=1;j<=10;j++)
  {
  printf("%d\t",j*i);
  }
  }
  getch();
  }



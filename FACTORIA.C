/*void main()
{
int i,n,fact=1;
clrscr();
printf("enter a number:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 fact=fact*i;
 }
 printf("Factorial number %d is: %d",n,fact);
 getch();
 }*/

 void main()
 {
 int num=5,i,fact=1;
 clrscr();
 printf("Enter five even numbers: ");
 scanf("%d %d %d %d %d",&num,&num,&num,&num,&num);
 for(i=1;i<=num;i++)
 {
 fact=fact*i;
 printf("sum of fact is: %d %d ",fact);
 }
 getch();
 }






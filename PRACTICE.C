/*void main()
{
clrscr();                           //hello world
printf("Hello world");
getch();
}*/

/*void main()
{
int a,b,sum,sub;
clrscr();
printf("Enter first number:");            //sum or sub
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
sum=a+b;
printf("sum is=%d %d",a+b,a-b);
getch();
}*/

/*void main()
{
int a=30;
int b=20;
clrscr();
if(a>b)                       //less or greater
{
printf("number is greater");
}
else
{
printf("number is less");
}
getch();
}*/

/*void main()
{
int a=60;         //percent
int b=42;
float per;
per=b*100/a;
clrscr();
printf("percentage=%.2f%%",per);
getch();
}*/

/*void main()
{
int a=10;
int b=20;
int c=30;
int d=40;                  //avg
int e=50;
int avg,sum;
clrscr();
sum=a+b+c+d+e;
avg=sum/5;
printf("avg is:%d",avg);
getch();
} */

/*void main()
{
int i;
clrscr();
for(i=1;i<=10;i++)
{                        //10 times hello
printf("Hello");
printf("\n");
}
getch();
}*/

void main()
{
int n,i,j,num1,num2;
clrscr();
printf("enter first number: ");
scanf("%d",&num1);                 //table
printf("Enter last number: ");
scanf("%d",&num2);
for(i=1;i<=10;i++)
{
for(j=num1;j<=num2;j++)
{
printf("%4d",i*j);
}
printf("\n");
}
getch();
}

/*void main()
{
int i,sum=0;
clrscr();
for(i=1;i<=100;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}*/

/*void main()
{
int i,n;
clrscr();
printf("enter number: ");
scanf("%d",&n);
if(n%2==0)
{
printf("number is even");      //even or odd
}
else
{
printf("number is odd");
}
getch();
}*/

/*void main()
{
int a=20;
int b=30;
int c=25;
int d=45;
int e=20;
int t=50;
int sum;          //5 no percent
float per;
clrscr();
sum=a+b+c+d+e;
per=sum*500/t;
printf("percentage=%.2f%%",per);
getch();
}*/

/*void main()
{
int a=10,b=20,c=25,d=30,e=40,max;
clrscr();
if(a>b && a>c && a>d && a>e)
max=a;
else if(b>c && b>d && b>e)
max=b;
else if(c>d && c>e)      //find greater no from multiple digits
max=c;
else if(d>e)
max=d;
else
max=e;
printf("%d",max);
getch();
}*/

/*void main()
{
int n=31,i,f=0;
clrscr();
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
{
printf("number is prime");
}
getch();
}*/

/*void main()
{
int i,n=7;
int prime=1;
clrscr();
for(i=2;i<n;i++)
{
 if(n%i==0)
  {
   prime=0;
  }
}
  if(prime==1)
    printf("number is prime",n);
  else
    printf("number is not prime",n);
getch();
} */




/*void main()
{
int a=5,b=6,c=11;
clrscr();
printf("%d %d %d");
getch();
}*/

/*int isprime(int n)
{
 int i,f=0;
 for(i=2;i<n/2;i++)    //prime series
 {
   if(n%i==0)
   f++;
 }
   if(f==0)
     printf("%d ",n);
}
void main()
{
  int i,n=50;
  clrscr();
  for(i=1;i<=n;i++)
  {
    isprime(i);
    }
  getch();
  }   */

/*void main()
{
 int n=11,pow=3,i,s=1;
 clrscr();                     //power fun.
 for(i=1;i<=pow;i++)
 {
   s=s*n;
 }
   printf("%d",s);
   getch();
} */

/*void main()
{
int a=10;
{
int a=20;               //Error
printf("%d %d",a,::a);
getch();
}
}*/

/*int a=10;
void main()
{
int a=20;
{
clrscr();
printf("%d %d",a,::a);
getch();
}
}*/

/*int x=1;
void main()
{
int x=10;
{
int x=20;
clrscr();
printf("%d %d",x,::x);
}
printf("%d %d",x,::x);
getch();
} */



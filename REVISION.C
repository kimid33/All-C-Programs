/*void main()
{
  int i,n=7,fact=1;     // factorial
  clrscr();
  for(i=1;i<=n;i++)
  {
   fact=fact*i;
  }
  printf("factorial no %d= %d",n,fact);
  getch();
}*/
/*int fact (int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;           //strong no
  }
  return fact;
}
void main()
{
  int n=145,r,sum=0,f;
  clrscr();
  f=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+fact(r);
    n=n/10;
  }
 if(sum==f)
   printf("no is strong");
 else
   printf("no is not strong");
   getch();
} */

/*void main()
{
  int i,n=7,sum=0;
  clrscr();                       //perfect
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    sum=sum+i;
  }
  if(sum==n)
  {
    printf("%d is perfect no",n);
  }
  else
    printf("%d is not perfect no",n);
    getch();
} */

/*void main()
{
  int i,n,prime=1;
  clrscr();
  printf("Enter a number");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
   if(n%i==0)
   {
    prime=0;
    }
  }
    if(prime==1)
   printf("is prime");
  else
    printf("is not prime");
  getch();
}*/

/*void main()
{
  int n=153,sum=0,r,p,t;
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
    printf("is armstrong");
    }
  else
  {
     printf("is not armstrong");
     }
   getch();
}*/

/*void main()
{                               //Area of rectangle
  int length,area,breadth;
  clrscr();
   printf("Enter length: ");
   scanf("%d",&length);
   printf("Enter breadth: ");
   scanf("%d",&breadth);
   area=length*breadth;
   printf("Area of rectangle is:= %d",area);
   getch();
} */

/*void main()
{                                    //area of square
  int area,side;
  clrscr();
  printf("Enter area of side: ");
  scanf("%d",&side);
  area=side*side;
  printf("Area of square is:=%d",area);
  getch();
} */

/*void main()
{
  int sum,num1,num2;                     //sum of numbers
  clrscr();
  printf("Enter first number: ");
  scanf("%d",&num1);
  printf("enter second number: ");
  scanf("%d",&num2);
  sum = num1+num2;
  printf("Sum of digits:%d+%d=%d",num1,num2,sum);
  getch();
}  */

/*#include<math.h>
void main()
{
  float r,area;
  clrscr();
  printf("Enter a number:");
  scanf("%f",&r);
  area=M_PI*r*r;
  printf("Area of circle is=%.2f",area);
  getch();
}*/

/*void main()
{
 int i;
 clrscr();
 for(i=0;i<=256;i++)
 {
   printf("%d %c ",i,i);
 }
 getch();
}*/


/*void main()                             //sum of digits
{
  long int n=112345892,i,sum=0;
  clrscr();
  while(n!=0)
  {
    i=n%10;
    sum=sum+i;
    n=n/10;
  }
  printf("sum of digits:%ld",sum);
  getch();
} */

/*void main()
{
  float fahrenheit,celsius;
  clrscr();                                     //convert fahrenheit to celsius
  printf("Enter fahrenheit number: ");
  scanf("%d",&fahrenheit);
  celsius = ((fahrenheit-32)*5)/9;
  printf("Temperature in celsius is: %f",celsius);
  getch();
} */

/*void main()
{
  int i,n;                     //print a to z
  clrscr();
  for(i=97;i<=122;i++)
  {
    printf("%d=%c ",i,i);
  }
  getch();
}*/

/*void main()
{
  float fahrenheit,celsius=0 ;
 // fahrenheit=(1.8*celsius)+32;
  clrscr();
  printf("Enter celsius number: ");
// scanf("%d",&celsius);
  fahrenheit=(1.8*celsius)+32;
  scanf("%d",&celsius);
  printf("Temperature in fahrenheit is: %f",fahrenheit);
  getch();
} */

/*void main()
{
  float f;                //fahrenheit to celsius
  int c;
  clrscr();
  scanf("%d",&c);
  f=(1.8*c)+32;
  printf("%.4f",f);
  getch();
}*/

/*void main()
{					    //8
  float meter;
  int feet;
  clrscr();
  printf("Enter feet number:");
  scanf("%d",&feet);
  meter=feet/3.281;
  printf("meter=%.3f",meter);
  getch();
} */

/*void main()
{
  int a=20;                               //9
  int b=10;
  clrscr();
  printf("addition is: %d\n",a+b);
  printf("subtraction is: %d\n",a-b);
  printf("multiplication is: %d\n",a*b);
  printf("division is: %d\n",a/b);
  printf("module is: %d",a%b);
  getch();
} */

/*void main()
{                                     //10
  float a=2.25;
  float b=5.65;
  clrscr();
  printf("multiplication is: %.2f",a*b);
  getch();
} */

/*void main()
{
  int i,a=2;		   //multiplication table of the given number
  clrscr();
  for(i=1;i<=10;i++)
  {
  printf(" %d ",i*a);
  }
  getch();
}  */

/*void main()
{
  long int n=123456789,b;
  clrscr();
  while(n!=0)               //13
  {
    b=n%10;
    printf("%d ",b);
    n=n/10;
    }
    getch();
}*/

/*void main()
{
  int sum=0,i;
  clrscr();                        //15
  printf("Even numbers:\n");
  for(i=2;i<=100;i++)
  {
   if(i%2==0)
   {
     sum=sum+i;
     printf("%d ",i);
   }
  }
  printf("\nsum of even= %d",sum);
  getch();
} */

/*void main()
{
  unsigned long int pro=1,i;              //15
  clrscr();
  printf("even numbers: ");
  for(i=2;i<=19;i++)
  {
    if(i%2==0)
    {
      pro=pro*i;
    }
  }
  printf("%ld",pro);
  getch();
} */


/*void main()
{
  int i,sum=0;
  clrscr();
  printf("odd numbers:");     //16
  for(i=1;i<=100;i++)
  {
    if(i%2!=0)
    {
     sum=sum+i;
     printf(" %d",i);
    }
    }
     printf("\nsum of odd numbers:= %d",sum);
   getch();
} */

/*void main()
{                                //20
  int var=234.232;
  clrscr();
  printf("%d",var);
  getch();
} */

/*void main()
{
  int var=24.35;                      //22
  clrscr();
  printf("%d",var);
  getch();
} */

/*void main()
{                                   //23
  clrscr();
  printf("%f",10);
  getch();
} */

/*void main()
{
 float a=6.5;                       //27
 clrscr();
 printf("%d",a);
 getch();
} */

/*void main()
{
  int a=10,b=20;
  clrscr();
  printf("%d %d %d",scanf("%d %d"),a,b);
  printf("%d %d",a,b);
  getch();
} */

/*void main()
{
  char *s="myworld";
  int i=9;
  clrscr();
  printf("%10.*s",i,s);
  getch();
} */

/*void main()
{                                      //31
  int a=-1;
  clrscr();
  printf("%d %u %o %x",a,a,a,a);
  getch();
}*/

/*void main()
{
  int i=10,j=3;
  clrscr();
  printf("%d %d %d",i,j);
  getch();
} */

/*void main()
{
  int n=1;
  clrscr();
  scanf("%d",&n);
  printf("%d\n",n);
  getch();
} */

/*int main()
{                                     //37****
  char n[]="ABCDE";
  char s[13]="AAAAABBBBB";
  clrscr();
  sscanf(n,"%s",s);
  printf("%s\n",s);
  getch();
} */

/*void main()
{
  clrscr();
  printf("%*d",10,100);
  getch();
}*/



/*void main()
{
  int i,r,n=12345,pro=1;
  clrscr();
  while(n!=0)
  {                               //18
    r=n%10;
    pro=pro*r;
    n=n/10;
  }
  printf("product of digits: %d",pro);
  getch();
}*/

/*void main()
{
  int i,n=7,fact=1;                      //21
  clrscr();
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
    printf("factroial is: %d ",fact);
    getch();
} */
int revnum (int n)
{
  int r,f=0;
  while(n!=0)
  {
    r=n%10;
    f=f*10+r;
    n=n/10;
  }
  return f;
}
void main()
{
  int n1=1234;
  int f=0,r,n2=revnum(n1);            //17
  clrscr();
  while(n1!=0)
  {
    if(f==0||n1<10)
      r=n1%10;
    else
      r=n2/10;
      f=f*10+r;
      n1=n1/10;
      n2=n2/10;
   }
      printf("%d",f);
      getch();
}

/*void main()
{
  clrscr();                              //19
  printf("\n%d %o %x",56,56,56);
  printf("\n%d %o %x",0144,0144,0144);
  printf("\n%d %o %X",0xa1,0xa1,0xa1);
  printf("\n%d %o %x",081,081,081);
  getch();
}*/

/*void main()
{
 intvar=234.232;
 clrscr();
 printf("%d",var);
 getch();
} */

/*void main()
{
 clrscr();
 printf("%c %c\n",'a',65);
 getch();
}*/

/*void main()
{
  clrscr();
  printf("%d %x %o %#x %#o\n",100,100,100,100,100);
  getch();
} */

/*void main()
{
  clrscr();
  printf("%*d",5,10);
  getch();
}*/

/*void main()
{
 clrscr();
 printf("%4.2f %+.0e %E\n",3.1416,3.1416,3.1416);
 getch();
}*/

/*void main()
{
 clrscr();
 printf(("Value:%s","abc"));
 getch();
} */

/*void main()
{
  printf("%c %c\n",'a',65);
  print("%d %d");   */

/*void main()
{
  int a=5;
  clrscr();
  printf("%d"+1,a);
  getch();
}*/

/*void main()
{
  clrscr();
  printf("\n%d",printf("%d%d",10,20,30));
  getch();
} */

/*void main()
{
  float a=6.5;
  clrscr();
  printf("%d",a);
  getch();
}*/







































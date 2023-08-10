/*void main()
{                                   //1
int age;
clrscr();
printf("Enter age: ");
scanf("%d",&age);
if(age>=18)
{
printf("Eligible for vote");
}
else
{
printf("Not eligible for vote");
}
getch();
}*/

/*void main()
{                                      //2
int amt;
clrscr();
printf("Enter amount: ");
scanf("%d",&amt);
if(amt>=500 && amt<1000)
{
amt=amt-20;
printf("%d",amt);
}
else if(amt<500)
{
amt=amt+40;
printf("%d",amt);
}
getch();
}*/

/*void main()
{                                         //3
int amt;
clrscr();
printf("Enter ammount");
scanf("%d",&amt);
if(amt>500)
{
amt=amt+50;
printf("%d",amt);
}
else if(amt<500)
{
amt=amt-50;
printf("%d",amt);
}
getch();
} */

/*void main()
{                                            //3
  int n1,n2,n3;
  clrscr();
  printf("enter three number: ");
  scanf("%d %d %d",&n1,&n2,&n3);
  if(n1>n2 && n1>n3)
     printf("%d number is greatest",n1);
  if(n2>n1 && n2>n3)
     printf("%d number is greatest",n2);
  if(n3>n1 && n3>n2)
     printf(" %d number is greatest",n3);
  getch();
} */

/*void main()
{                                          //4
  int num;
  clrscr();
  printf("Enter a number:");
  scanf("%d",&num);
  if(num>=0)
    printf("%d number is positive",num);
  else
    printf("%d number is negetive",num);
    getch();
} */

/*void main()
{                                             //5
  char c;
  int lowercase_vovel,uppercase_vovel;
  clrscr();
  printf("Enter an alphabet:");
  scanf("%c",&c);
  lowercase_vovel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
  uppercase_vovel=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    printf("%c is vovel",c);
  else
    printf("%c is consonent",c);
    getch();
}*/

/*void main()
{                                                //6
 char c;
 clrscr();
 printf("Enter alphabet:");
 scanf("%c",&c);
 if((c>='a' && c<='z') || (c>='A' && c<='Z'))
   printf("%c is alphabet",c);
 else
   printf("%c is not an alphabet",c);
   getch();
} */

/*void main()                          //7
{
  int num;
  clrscr();
  printf("Enter a number: ");
  scanf("%d",&num);
  if(num%2==0)
    printf("%d number is even",num);
  else
    printf("%d number is odd",num);
    getch();
} */

/*void main()                             //8
{
  int num1,num2;
  clrscr();
  printf("Enter a number: ");
  scanf("%d %d",&num1,&num2);
  if(num1>num2)
    printf("%d number is greatest",num1);
  if(num2>num1)
    printf("%d number is greatest",num2);
    getch();
} */

/*void main()
{                                            //9
  int year;
  clrscr();
  printf("Enter year: ");
  scanf("%d",&year);
  if(year % 400==0)
   {
    printf("%d is leap year",year);
   }
  else if(year % 100==0)
   {
    printf("%d is not a leap year",year);
   }
  else if(year % 4==0)
   {
    printf("%d is a leap year",year);
   }
  else
    printf("%d is not a leap year",year);
    getch();
}  */

/*void main()
{                                   //10
  int num;
  clrscr();
  printf("Enter number: ");
  scanf("%d",&num);
  if(num>0)
    printf("%d number is positive",num);
  if(num<0)
    printf("%d number is negetive",num);
  else if(num==0)
    printf("%d number is zero",num);
    getch();
} */

/*void main()
{                                       //11
  int num;
  clrscr();
  printf("Enter number: ");
  scanf("%d",&num);
  if(num%5==0)
    printf("%d number is divisible by 5",num);
  else if(num%11==0)
    printf("%d number is divisible by 11",num);
  else if(num%5!=0 && num%11!=0)
    printf("%d  number is not divisible by 5 and 11",num);
    getch();
} */

/*void main()
{                                           //12
  int y,m,w,d;
  clrscr();
  printf("Enter days: ");
  scanf("%d",&d);
  y=d/365;
  d=d%365;

  m=d/30;
  d=d%30;

  w=d/7;
  d=d%7;

  printf("\nY: %d\nM: %d\nW: %d\nD: %d",y,m,w,d);
  getch();
} */


/*void main()
{                                               //13
  int amt,qty,total;
  clrscr();
  printf("Enter ammount: ");
  scanf("%f",&amt);
  printf("Enter quantity you want:");
  scanf("%f",&qty);
  total=amt*qty;
  printf("\n total balance: %.2f",total);
  getch();
} */

void main()                                       //14
{
  int buy_price,sell_price,amt;
  clrscr();
  printf("Enter your buy price: ");
  scanf("%d",&buy_price);
  printf("Enter your sell price: ");
  scanf("%d",&sell_price);
  if(sell_price>buy_price)
  {
    amt=sell_price-buy_price;
    printf("profit: %d",amt);
  }
  else if(buy_price>sell_price)
  {
    amt=buy_price-sell_price;
    printf("loss: %d",amt);
  }
    getch();
}

/*void main()                          //15
{
  int s,m,h;
  clrscr();
  printf("Enter seconds:");
  scanf("%d",&s);

  m=s/60;
  s=s%60;
  h=m/60;
  m=m%60;

  printf("s=%d\n h=%d\n m=%d\n",s,h,m);
  getch();
} */











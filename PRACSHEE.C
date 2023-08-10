/*void main()
{                    //1
  int a=1,b=2;
  clrscr();
  LVL:
  switch(3)
  {
    case a:
      printf("1");
    case b:
      printf("2");
    default:
    goto LVL;
  }
  getch();
} */

/*void main()
{
  double ch;              //2
  clrscr();
  scanf("%lf",&ch);
  switch(ch)
  {
    case 1:
      printf("1");
      break;
    case 2:
      printf("2");
      break;
  }
  getch();
}*/

/*void main()
{                          //3
  char*ch;
  printf("Press(1 to 3)");
  scanf("%s",ch);
  switch(ch)
  {
   case "1":
     printf("1");
     break;
   case "2":
   printf("2");
   break;
  }
  getch();
}*/

/*void main()
{
  int ch='1';
  clrscr();
  switch(ch)          //4
  {
    case 1:
      printf("1\n");
    default:
      printf("2\n");
  }
  getch();
} */

/*void main()
{
  int ch;
  clrscr();                      //5
  printf("Enter 1 or 2:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
     printf("1\n");
     break;
     printf("hi");
    default:
     printf("2\n");
  }
  getch();
} */

/*void main()
{
  int ch=1;            //6
  clrscr();
  switch(ch,ch+1)
  {
    case 1:
    printf("1\n");
    break;
    case 2:
    printf("2");
    break;
  }
  getch();
} */

/*int main()
{
 int a=1,b=1;
 clrscr();     //7
 switch(a)
 {
   case a*b:
     printf("yes");
   case a-b:
     printf("no\n");
     break;
  }
  getch();
} */

/*int main()
{
  int x=97;
  clrscr();         //8
  switch(x)
  {
    case'a':
      printf("yes");
      break;
    case 97:
      printf("no\n");
      break;
  }
  getch();
} */

/*int main()
{
  float f=1;
  switch(f)
  {                    //9
  case 1.0:
   printf("yes\n");
   break;
  default:
   printf("default\n");
  }
  getch();
} */

/*const int a=1,b=2;
int main()
{
  int x=1;
  switch(x)               //10
  {
    case a:
     printf("yes");
    case b:
     printf("no\n");
     break;
  }
  getch();
} */

/*int main()
{
  clrscr();
  switch(printf("Do"))       //12
  {
    case 1:
     printf("First\n");
     break;
    case 2:
     printf("Second\n");
     break;
    default:
     printf("Default\n");
     break;
  }
  getch();
} */

/*#define max(a)a
int main()
{
  int x=1;                    //11
  clrscr();
  switch(x)
  {
    case max(2):
      printf("yes\n");
    case max(1):
      printf("no\n");
      break;
      getch();
  }
} */

/*int main()
{
  int a=1;
  clrscr();
  switch(a)
    case 1:
      printf("%d",a);      //13
    case 2:
      printf("%d",a);
    case 3:
      printf("%d",a);
    default:
      printf("%d",a);

  getch();
} */

/*#define max(a) a
int main()
{                      //11
  int x=1;
  clrscr();
  switch(x)
  {
    case max(2):
      printf("yes\n");
    case max(1):
      printf("no\n");
      break;
  }
  getch();
} */

/*void main()
{
  int a=1;
  clrscr();
  switch(++a);               //15
  {
  }
  switch(++a);
    printf("a");
  getch();
}*/

/*void main()
{
  int a=1;
  clrscr();
  switch(a)      //16
  {
    case 4:
      printf("s1");
      break;
    case 1<<2:
      printf("s2");
  }
  getch();
} */

/*#define j 2
void main()
{                        //17
  int a=1;
  clrscr();
  switch(a)
  {
    case 1:
      printf("s1");
      break;
    case j:
      printf("s2");
  }
  getch();
} */

/*void main()
{
  int i=4;
  clrscr();        //18
  switch(i)
  {
    int x=1;
    default:
      x=2;
      printf("%d",x);
    case 1:
    x=3;
     printf("%d",x);
     break;
    case 2:
     x=4;
      printf("%d",x);
   }
   getch();
}   */

/*void main()
{                              //19
  int i=9;
  clrscr();
  switch(i)
  {
    default:
    {
      case 6:
       printf("s1");
    }
      case 3:
       printf("s2");
       break;
   }
   getch();
} */

/*void main()
{
  int i=1,j=2;
  clrscr();
  switch(i,j)
  {
    default:
      printf("LAST");
      break;
    case 3:
      printf("THREE");
      break;
    case 2:
      printf("TWO");
      break;
    case 1:
      printf("ONE");
      break;
  }
  getch();
} */

/*void main()
{
 char k=4;                    //21
 clrscr();
 switch(k)
 {
   default:
     printf("LAST");
   case 4:
     printf("FOUR");
   case 2:
     printf("TWO");
     break;
  }
  getch();
} */

/*void main()
{
  int num=0;              //22
  clrscr();
  for(num=0;num<2;num++)
  {
    switch(num)
    {
      case 0:num+=2;
      case 1:num+=1;
      case 5:num+=2;
      default:num+=3;
      break;
    }
      printf("%d",num);
   }
   getch();
} */

/*void main()
{
  int i=1,j=2,c=3;         //23 duplicate case
  int ch=2;
  clrscr();
  switch(ch)
  {
    default:
      i++;
      case 1<<1==2:
      j++;
    case 1:
      i=j++;
  }
   printf("%d %d",i,j);
   getch();
} */

/*void main()
{
  int i=1,j=2,c=3;          //24 costant expression required
  int ch=2;
  clrscr();
  switch(ch)
  {
    default:
      i++;
    case i+1==2:
      j++;
  }
   printf("%d %d",i,j);
   getch();
} */

/*void main()
{
  int i=1;
  clrscr();             //25 duplicate case
  switch(i)
  {
    case 1:
      printf("A");
      break;
    case 2:
      printf("B");
      break;
    case 3-2:
      printf("C");
      break;
    default:
      printf("D");
  }
  getch();
} */

/*void main()
{
  int num=10;
  clrscr();
  switch(num)
  {
  }
  printf("S1");
  getch();
  }*/

/*void main()
{
  int i=1;
  clrscr();
  switch(i)
  {
     printf("\nHello");
    case 1:
      printf("\nS1");
      break;
    case 2:
      printf("\nS2");
      break;
  }
  getch();
}*/

/*void main()
{
  clrscr();
  switch(1)
    case 0:
      printf("Hai");
  getch();
} */

/*void main()
{
  clrscr();
  switch(1)
  {
    default:
      printf("Hai");
      break;
    case 1:
      printf("hello");
  }
  getch();
} */

/*void main()
{
  int i=4;
  clrscr();
  switch(printf("Ram"),printf("1"))
    case 4:
      printf("%d",i++);
      break;
    case 1:
      printf("%d",++i);
      break;
  printf("%d",i++);
  getch();
}*/



/*void main()
{
char*str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int a=2;
 clrscr();
 switch('A')
 {
  case 97:
 switch(97)
 {
 default:
  str+=1;
 }
 case 65:
 switch(97)
 {
  case 'A':
  str+=2;
  case'a':
  str+=4;
 }
 default:
 for(;a;a--)
 str+=8;
 }
printf("%d",str);
getch();
} */

void main()
{                                    //39
switch(5/2*6+3.0){
case 3:
printf("hi");
break;
case 15:
printf("hello");
break;
case 0:
printf("hey");
break;
default:
printf("oo");
getch();
}
}

/*void main()
{
unsigned char c=280;
clrscr();
switch(c){
printf("1");
case 280:
printf("2");
case 24:
printf("3");
default:
printf("4");
printf("5");
getch();
}
} */

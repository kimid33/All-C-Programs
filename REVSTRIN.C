/*void main()
{
  char str[]=" HELLO DOLLOP INFOTECH";
  int len,start=0;
  clrscr();
  len=printf(str);
  while(start<len)
    str[start]=str[start]+str[--len]-(str[len]=str[start++]);
    printf("\n%s",str);
    getch();
} */



/*void main()
{
  int s,e,t;
  char str[]="Nothing is Imposible";
  clrscr();
  s=0;
  e=strlen(str)-1;
  while(s<e)
  {
    t=str[s];
    str[s]=str[e];
    str[e]=t;
    s++;
    e--;
  }
  printf("%s",str);
  getch();
} */

/*int isperfect(int n)
{
  int i,s=0;
  for(i=1;i<=n/2;i++)
  {
    if(n%i==0)
    {
      s=s+i;
    }
  }
    return s;
  }
			  //Enter 10 number and check number is prime or not then add prime numbers and then check addition of prime number is perfect or not..
int isprime(int n)
{
  int i;
  if(n<2)
  return 0;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
      return 0;
   }
    return 1;
  }

void main()
{
  int arr[10];
  int i,sum=0;
  clrscr();
  printf("Enter numbers");
  for(i=1;i<10;i++)
  {
    scanf("%d",&arr[i]);
    if(isprime(arr[i])==1)
    {
      sum=sum+arr[i];
    }
  }
  if(isperfect(sum)==sum)
  {
    printf("%d is perfect no",sum);
  }
  else
  {
    printf("%d is not perfect",sum);
  }
 getch();
} */

/*void main()
{
  int i;
  char str[]="Hello Kimi";
  clrscr();
  printf("%d",strlen(str));
  getch();
} */

/*void main()
{
  char str[]="Hello Kimi";
  clrscr();
  printf("%d",sizeof(str));
  getch();
}*/

void main()
{
 int i;
 char str[]="Hello this is indore";
 char f='i',r='e';
 clrscr();
 for(i=0;i<=strlen(str);i++)
 {
   if(f==str[i])
   {
     str[i]=r;
   }
 }
   printf("%s",str);
   getch();
}

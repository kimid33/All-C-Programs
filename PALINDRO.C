/*void main()
{
  char str[]="ABCBA";
  int i,start=0,last,count=0;
  last=strlen(str)-1;
  clrscr();                            //string palindrome
  while(start<last)
  {
    if(str[start]!=str[last])
    {
      count++;
      break;
    }
    last--;
    start++;
  }
  if(count==0)
     printf("string is palindrome");
  else
     printf("string is not palindrome");
     getch();
} */

/*void main()
{
  char str[]="nayan";
  int s=0,l=strlen(str)-1;
  int f=0;
  clrscr();
  while(s<l)
  {
    if(str[s]!=str[l])
    {
      f=1;
      printf("Is not palindrome");
      break;
    }
    s++;
    l--;
  }
    if(f==0)
      printf("Is palindrome");
      getch();
}*/

/*void main()
{
  char str[]="Hello Placement Adda";
  int s=0,l=strlen(str)-1;
  char ch;
  clrscr();
  while(s<l)
  {
    ch=str[s];
    str[s]=str[l];
    str[l]=ch;
    s++;
    l--;
  }
  printf("%s",str);
  getch();
} */

/*void main()
{
  char str[]="hello this is kimi";
  int i;
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
} */

void main()
{
  int i,r,n=1234,sum=0;
  clrscr();
  L:
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
  if(sum>9)
  {
    n=sum;
    sum=0;
    goto L;
  }
  printf("%d",sum);
  getch();
}
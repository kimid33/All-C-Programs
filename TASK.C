/*void main()
{
  int i;
  clrscr();
  for(i=1;i<=10;i++)
  {
    printf("%d ",i*(i+1));
    printf("\n");
  }
  for(i=2;i<=10;i++)
  {
    printf("%d ",i*i-1);
  }
    getch();
} */

/*void main()                    //sum of natural numbers
{
  int n;
  clrscr();
  printf("Enter N numbers: ");
  scanf("%d",&n);
  printf("Sum Of N numbers %d",n*(n+1)/2);
  getch();
} */

/*void main()
{
  int i=0,j=0,n=9;
  char str[]={5,2,4,3,6,8,7,9,1};
  clrscr();
  while(i<n)
  {
   for(j=i+1;j<n;j++)
   {
     if(str[i]<=str[j])
     {
     str[i]=str[i]+str[j]-(str[j]=str[i]);
     }
   }
    i++;
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",str[i]);
  }
  getch();
} */

/*void main()                          //string palindrome
{
  char str[]="kimi";
  int start=0,last,count=0;
  clrscr();
  last=strlen(str)-1;
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
}  */

/*void main()
{
  char ch='n';
  clrscr();
  if(ch>=65 && ch<=90)
  {
    ch=ch+32;
  }
  else if(ch>=97 && ch<=122)
  {
    ch=ch-32;
  }
   printf("%c",ch);
   getch();
}  */

/*void main()
{
  int t=0,r,n=1234;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    t=t*10+r;
    n=n/10;
  }
  printf("%d",t);
  getch();
}*/

/*int revInt(int n)
{
  int t=0,r;
  while(n!=0)
  {
   r=n%10;
   t=t*10+r;
   n=n/10;
  }
  return t;
}

void main()
{
  int s=0,n=12342,r,rev;
  clrscr();
  rev=revInt(n);
  while(n!=0)
  {
    if(s==0 || n<10)
    {
      r=n%10;
    }
    else
    {
      r=rev%10;
    }
    s=s*10+r;
    n=n/10;
    rev=rev/10;
  }
  printf("%d",s);
  getch();
}*/
char countCon(char str[])
{
  int i,c=0;
  for(i=0;i<strlen(str);i++)
  {
    if(!(str[i]=='a' || str[i]=='e')
  }
}

char countVowel(char str[])
{
  int i,count=0;
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
      count++;
    }
  }
  return count;
}

void main()
{
  char str[]="hello this is kimi dwivedi";
  int i,s=0,l,temp;
  char count;
  clrscr();
  l=strlen(str)-1;
  printf("total no of vovels is %d",countVowel(str));
  printf("\n%d",countCon(str));
  while(s<l)
  {
      temp=str[s];
      str[s]=str[l];
      str[l]=temp;
      s++;
      l--;
    }
    printf("\n%s",str);
    getch();
}

/*void main()
{
  int l,b,r;
  clrscr();
  printf("Enter length: ");
  scanf("%d",&l);
  printf("Enter breadth: ");
  scanf("%d",&b);
  r=l*b;
  printf("area of rectangle is %d",r);
  getch();
}*/

/*void main()
{
  int l=8,b=6,r;
  clrscr();
  r=l*b;
  printf("area of rectangle is: %d",r);
  getch();
}*/
/*void concatstr(char s1[],int s,char s2[])
{
  int i,j;
  i=s;
  j=0;
  while(j<strlen(s2))
  {
    s1[i]=s2[j];
    i++;
    j++;
  }
}

void main()
{
  char s1[20]="hello";
  char s2[]="dollop";
  clrscr();
  concatstr(s1,2,s2);
  printf("%s",s1);
  getch();
} */

/*void deletechar(char s1[],char ch)
{
  int i,j,s=0;
  for(j=0;j<strlen(s1);j++)
  {
    if(s1[j]==ch)
    {
    for(i=j;i<strlen(s1);i++)
    {
      s1[i]=s1[i+1];
    }
    //j--;
  }
}
}
void main()
{
  char s1[]="hello";
  char ch='l';
  clrscr();
  deletechar(s1,ch);
  printf("%s",s1);
  getch();
}   */

/*void charposidel(char str[],int s)
{
  int i=s;
  for(i=s;i<strlen(str);i++)
  {
    str[i]=str[i+1];
  }
}
void main()
{
  char str[]="placement";
  clrscr();
  charposidel(str,4);
  printf("%s",str);
  getch();
} */

/*int pow(int n,int p)
{
  int i,s=1;
  for(i=1;i<=p;i++)
  {
    s=s*n;
  }
  return s;
}

int countDigit(int n)
{
  int c=0;
  while(n!=0)
  {
    c++;
    n=n/10;
  }
  return c;
}

void main()
{
  int n=153,r,c,sum=0,t;
  clrscr();
  c=countDigit(n);
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+pow(r,c);
    n=n/10;
  }
  if(sum==t)
  {
    printf("%d is armstrong number",t);
  }
  else
    printf("%d is not armstrong number",t);
    getch();
} */

/*int fact(int n)
{
  int f=1,i;
  for(i=1;i<=n;i++)
  {
    f=f*i;
  }
  return f;
}

void main()
{
  int n=144,r,sum=0,t;
  clrscr();
  t=n;
  while(n!=0)
  {
    r=n%10;
    sum=sum+fact(r);
    n=n/10;
  }
  if(sum==t)
    printf("%d is strong number",t);
  else
    printf("%d is not strong number",t);
    getch();
} */

/*void main()
{
  int a=0,b=1,next,i;
  clrscr();
  printf("%d %d ",a,b);
  for(i=2;i<10;i++)
  {
    next=a+b;
    printf("%d ",next);
    a=b;
    b=next;
  }
  getch();
}*/

/*void main()
{
  int n=1234,sum=0,r;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    sum=sum+r;
    n=n/10;
  }
  printf("%d",sum);
  getch();
} */

/*void main()
{
  int n=1234,t=0,r;
  clrscr();
  while(n!=0)
  {
    r=n%10;
    t=t*10+r;
    n=n/10;
  }
  printf("%d",t);
  getch();
} */

/*int pow(int n,int p)
{
   int i,s=1;
   for(i=1;i<=p;i++)
   {
     s=s*n;
   }
   return s;
}
void main()
{
  int i,n;
  clrscr();
  for(i=1;i<=5;i++)
  {
     printf("%d ",pow(3,i));
  }
  getch();
} */

/*void main()
{
  int a=10,b=20;
  int c;
  clrscr();
  //c=a;
  //a=b;
  //b=c;
  a=a+b-(b=a);
  printf("%d %d ",a,b);
  getch();
} */

/*void main()
{
  int i;
  char str[]="hello kimi";
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    printf("%c",str[i]);
  }
  getch();
} */

/*void main()
{
  char str[]="hello kimi";
  int i,count=0;
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    count++;
  }
  printf("%d",count);
  getch();
} */

/*void main()
{
  char str[]="hello kimi";
  int i,count=0;
  char ch='i';
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
     if(str[i]==ch)
     {
       printf("%c is found at %d position",ch,i+1);
       break;
     }
  }
  getch();
}*/

/*void main()
{
  char str[]="hello kimi";
  int i;
  char f='i',r='o';
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]==f)
    {
      str[i]=r;
    }
  }
  printf("%s",str);
  getch();
} */

/*void main()
{
  int i;
  char str[]="Hello This Is Kimi";
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=65 && str[i]<=97)
    {
      printf("%c",str[i]);
    }
  }
  getch();
}*/

/*int getfirstindex(char str[],char ch)
{
  int i;
  for(i=0;i<=strlen(str);i++)
  {
    if(ch==str[i])
      return i;
  }
   return -1;
}
 getlastindex(char str[],char ch)
{
  int i;
  for(i=strlen(str)-1;i>=0;i--)
  {
    if(ch==str[i])
      return i;
  }
   return -1;
 }

void main()
{
  char str[]="hello this is test";
  int i,t;
  char ch='e';
  clrscr();
  t=getfirstindex(str,ch);
  if(t==-1)
  {
    printf("not found\n");
  }
  else
  {
   printf("%c is found at %d position\n",ch,t+1);
  }
   t=getlastindex(str,ch);
   if(t==-1)
   {
     printf("not found\n");
   }
   else
   {
     printf("%c is found at %d position\n",ch,t+1);
   }
     getch();
} */

/*void main()
{
  char str[]="hello this is indore";
  int i,count=0;
  char ch=' ';
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
   if(str[i]==ch)
   {
     count++;
   }
  }
   printf("%d",count+1);
  getch();
}*/

/*void main()
{
  char str[]="hello test";
  char ch;
  int s=0,e=strlen(str)-1;
  clrscr();
  while(s<e)
  {
    ch=str[s];
    str[s]=str[e];
    str[e]=ch;
    s++;
    e--;
  }
  printf("%s",str);
  getch();
} */

/*void main()
{
  char str[]="nayan";
  int s=0,e=strlen(str)-1;
  int f=0;
  clrscr();
  while(s<e)
  {
    if(str[s]!=str[e])
    {
     f=1;
     printf("is not palindrome");
     break;
    }
    s++;
    e--;
  }
    if(f==0)
     printf("is palindrome");
     getch();
}  */

/*void concatstr(char str1[],char str2[])
{
  int i,j;
  i=strlen(str1);
  j=0;
  while(j<strlen(str2))
  {
    str1[i]=str2[j];
    i++;
    j++;
  }
}
void main()
{
  char str1[10]="hello";
  char str2[]="kimi";
  clrscr();
  concatstr(str1,str2);
  printf("%s",str1);
  getch();
} */

/*void main()
{
  char str[]="hello kimi";
  //char ch='l';
  int i;
  clrscr();
  for(i=4;i<strlen(str);i++)
  {
      str[i]=str[i+1];
  }
  printf("%s",str);
  getch();
} */

/*void main()
{
  char str[]="hello this is indore";
  int i,j;
  char ch='i';
  clrscr();
  for(j=0;j<strlen(str);j++)
  {
    if(str[j]==ch)
    {
      for(i=j;i<strlen(str);i++)
      {
	str[i]=str[i+1];
      }
      j--;
    }
  }
  printf("%s",str);
  getch();
}*/

/*int countchar(char str[],char ch,int index)
{
  int i,c=0;
  for(i=index;i<strlen(str);i++)
  {
    if(str[i]==ch)
    {
      c++;
    }
  }
    return c;
}
int checkchar(char str[],char ch,int index)
{
  int i;
  for(i=index;i>=0;i--)
  {
    if(str[i]==ch)
    {
      return 0;
    }
  }
  return 1;
}
void main()
{
  char str[]="placement";
  int i,c;
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    if(checkchar(str,str[i],i-1))
    {
     c=countchar(str,str[i],i);
     printf("%c:-%d\n",str[i],c);
    }
  }
  getch();
} */

/*void revstr(char str[],int s,int l)
{
  char ch;
  while(s<l)
  {
    ch=str[s];
    str[s]=str[l];
    str[l]=ch;
    s++;
    l--;
  }
}
void main()
{
  char str[]="hello this is indore";
  int i,si=0,li;
  clrscr();
  revstr(str,0,strlen(str)-1);
  for(i=0;i<strlen(str);i++)
  {
    if(str[i+1]==' ' || str[i+1]=='\0')
    {
      revstr(str,si,i);
      si=i+2;
    }
  }
  printf(str);
  getch();
}  */
void revstr(char str[],int s,int l)
{
  char ch;
  while(s<l)
  {
    ch=str[s];
    str[s]=str[l];
    str[l]=ch;
    s++;
    l--;
  }
}
int getLastIndex(int length,int s,int g)
{
  int l=s+g-1;
  if(l>=length)
   return length-1;
  else
   return l;
}
void main()
{
 char str[]="123456789ab";
 int i,g=3,li;
 clrscr();
 for(i=0;i<strlen(str);i++)
 {
   li=getLastIndex(strlen(str),i,g);
   revstr(str,i,li);
   i=li;
 }
 printf("%s",str);
 getch();
}

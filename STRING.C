/*void main()
{
  int i;                              //print all ASCII code
  clrscr();
  for(i=0;i<=255;i++)
  {
    printf("%c ",i);
  }
   getch();
} */

/*void main()
{                                    //print all alphabet
  int i;
  char ch='A';
  clrscr();
  for(i=0;i<26;i++)
  {
    printf("%c ",'A'+i);
  }
  getch();
}  */

/*void main()                           //error
{
  char ch='';
  clrscr();
  printf("%c",ch);
  getch();
} */

/*void main()                            //valid
{
  char ch=' ';
  clrscr();
  printf("%c",ch);
  getch();
}*/

/*void main()
{
  char ch[]="";
  clrscr();
  printf("%s",ch);
  getch();
} */

/*void main()
{                                   //print small alphabet
  int i;
  char ch='a';
  clrscr();
  for(i=0;i<26;i++)
  {
    printf("%c ",'a'+i);
  }
   getch();
}*/

/*void main()
{                                  //print ascii code of(0-9)
 int i;
 char ch='0';
 clrscr();
 for(i=0;i<10;i++)
 {
   printf("%d ",'0'+i);
 }
 getch();
} */

/*void main()
{                         //convert capital to small alphabet and small to capital
  char ch='r';
  clrscr();
  if(ch>=65 && ch<=90)
  {
    ch=ch+32;
  }
  else if(ch>=97 && ch<=122)
  {
    ch =ch-32;
  }
    printf("%c",ch);
    getch();
} */

/*void main()
{
  char ch='+';
  clrscr();
  if(ch>=48 && ch<=57)
  {
    printf("%c is numeric character",ch);
  }
  else if(ch>=65 && ch<=90)
  {
    printf("%c is capital alphabet character",ch);
  }
  else if(ch>=97 && ch<=122)
  {
    printf("%c is small alphabet character",ch);
  }
  else
  {
    printf("%c is symbol",ch);
  }
  getch();
}*/

/*void main()
{
  char str[]="abcdxy";
  clrscr();
  printf("%c",str[1]);
  getch();
} */

/*void main()
{
  char str[]="abcdxy";
  clrscr();
  printf("%d",sizeof(str));
  getch();
} */

/*void main()
{
  char str[]="abcdxy";
  clrscr();
  printf("%d",strlen(str));
  getch();
} */

/*void main()
{
  char str[]="abcdg\0hik";
  clrscr();
  printf("%s",str);
  getch();
} */

/*void main()
{
 char ch=3;
 clrscr();
 printf("%c",ch);
 getch();
}*/

/*void main()
{
  char ch=3,i;
  clrscr();
  for(i=ch;i<=12;i++)
  {
    printf("%c ",ch);
  }
  getch();
} */

/*void main()
{
  char ch=5,i;
  clrscr();
  for(i=ch;i<=15;i++)
  {
    printf("%c ",ch);
  }
  getch();
} */

/*void main()
{                                         //1
  char str[]="hello this is dollop";
  clrscr();
  printf("%s",str);
  getch();
} */

/*void main()                          //print characters of string using loop
{                                              //2
  char str[]="hello this is dollop";
  int i;
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    printf("%c ",str[i]);
  }
  getch();
} */

/*void main()
{                            //count number of vovels of given string
  int i;                                          //3
  int count=0;
  char str[]="my mother IS my DUNIYA";
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A'|| str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
    {
      count++;
    }
  }
    printf("%d ",count);
  getch();
}*/

/*void main()
{                                     //consonent
  int i;
  int count=0;
  char str[]="my mother IS my WORLD5656";
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
    {
      count++;
    }
  }
   printf("consonent=%d ",count);
   getch();
} */

/*void main()
{
  int i;
  char str[]="heLLo THis iS doLLoP";
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>='A' && str[i]<='Z')
    {
      printf("%c ",str[i]);
    }
  }
  getch();
}*/

/*void main()
{
  int i;
  char str[]="hello THIS IS dollop";
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>='a' && str[i]<='z')
    {
      printf("%c ",str[i]);
    }
  }
  getch();
} */

/*void main()
{
  int i;
  char str[]="THIS is my WORLD 3368";
  clrscr();                              // capital and small and numeric values
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=65 && str[i]<=90)
    {
      printf("capital=%c ",str[i]);
    }
  }
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=97 && str[i]<=122)
    {
      printf(" small=%c",str[i]);
    }
  }
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=48 && str[i]<=57)
    {
      printf("\nNumeric=%c",str[i]);
    }
  }
  getch();
} */

/*void main()
{
  int i;
  char str[]="THIS is my WORLD 3368";
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=65 && str[i]<=90)
    {
      printf("capital=%c ",str[i]);
    }
    if(str[i]>=97 && str[i]<=122)
    {
      printf(" small=%c",str[i]);
    }
    if(str[i]>=48 && str[i]<=57)
    {
      printf("\nNumeric=%c",str[i]);
    }
  }
  getch();
} */

/*void main()
{                                            //find char/string position
  char str[]="hello this is dollop";                 //4
  int i;
  char ch='i';
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(ch==str[i])
    {
      printf("%c is found at %d position",ch,i+1);
      break;
    }
  }
  getch();
} */

/*void main()
{                                           //find char position of given string
  char str[]="hello this is dollop";                    //5
  int i;
  char ch='s';
  clrscr();
  for(i=strlen(str)-1;i>=0;i--)
  {
    if(ch==str[i])
    {
      printf("%c is found at %d position",ch,i+1);
      break;
    }
  }
  getch();
} */

/*void main()
{                                  //replace character (6)
  int i;
  char str[]="hello this is dollop";
  char f='o',r='u';
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

/*int getFirstIndex(char str[],char ch)
{                                       //find first and last position of char
 int i;                                                 //7
 for(i=0;i<=strlen(str);i++)
 {
   if(ch==str[i])
      return i;
 }
   return -1;
}
int getlastIndex(char str[],char ch)
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
  int i;
  int t;
  char str[]="hello this is dollop";
  char ch='l';
  clrscr();
  t=getFirstIndex(str,ch);
  if(t==-1)
  {
    printf("not found\n");
  }
  else
  {
    printf("%c is found at %d position\n",ch,t+1);
  }
  t=getlastIndex(str,ch);
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

/*void main()                           //print only cosonent
{                                                          8
  int i;
  int count=0;
  char str[]="hello this is dollop";
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(!(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'))
    {
     printf("%c",str[i]);
    }
  }
  getch();
} */

/*void main()
{
  char ch='i';
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
} */

/*void main()
{
  int i;
  char str[]="This Is Placement Adda";
  int count=0;
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
  if(str[i]>=65 && str[i]<=90)
  {
    count++;
  }
}
  printf("counting of vovels=%d",count);
  printf("\n");

  for(i=0;i<=strlen(str);i++)
  {
  if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
  {
    count++;
  }
}
    printf("counting of consonent=%d",count);
   getch();
} */

/*void main()                         //count words of given string
{
 int i;
 int count=0;
 char str[]="hello this is dollop";
 char f=' ';
 clrscr();
 for(i=strlen(str)-1;i>=0;i--)
 {
   if(f==str[i])
   {
     count++;
   }
 }
  printf("%d",count+1);
  getch();
} */

/*void main()
{
  int s,e,t;
  char str[]="hello this is test";
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

/*void main()
{                                      //replace char
  int i;
  char str[]="hello kimi how are you?";
  char f='o',r='i';
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    if(f==str[i])
    {
      str[i]=r;
    }
  }
    printf("%s",str);
  getch();
} */

/*void main()                     //counting words
{
  int i;
  int count=0;
  char str[]="hello kimi how are you";
  char ch=' ';
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
   if(ch==str[i])
   {
     count++;
   }
  }
    printf("%d",count+1);
    getch();
} */

/*void main()
{
  int i;
  int count=0;
  char str[]="hello this is placement adda";
  char ch='s';
  clrscr();
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]==ch)
    {
    printf("%c is at %d position",ch,i+1);
    break;
    }
  }
  getch();
}*/

/*void main()
{
  char str[]="hello who are you";
  int s=0,e,temp,i;
  clrscr();
  printf()
  e=strlen(str)-1;
  while(s<e)
  {
   for(i=strlen(str)-1;i>=0;i--)
   {
    temp=str[s];
    str[s]=str[e];
    str[e]=temp;
   }
   s++;
   e--;
  }
   printf("%s",str);
   getch();
} */

/*void main()
{
  char str[]="hello rani madam";
  int i;
  char f='i',r='u';
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
  char str[]="ranikimi";
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
   printf(str);
   getch();
}*/

void main()
{
  char str[]="ranikimi";
  int i;
  //char ch='i';
  clrscr();
  for(i=2;i<strlen(str);i++)
  {
    str[i]=str[i+1];
  }
  printf(str);
  getch();
}

/*void main()
{
 int num1=10,num2,num3;
 num3=num1>=5?num2=100:num2=200;
 clrscr();
 printf("\n%d%d",num2,num3);
 getch();
} */

/*void main()
{
  char str[]="hello";
  int i;
  //int s=0,e=strlen(str)-1;
  //char ch=' ';
  clrscr();
  for(i=0;i<strlen(str);i++)
  {
    printf("%c ",str[i]);
  }
  getch();
} */
			//rev each word of given string

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
  char s1[] = "hello this is test";
  int i,si=0,li;
  clrscr();
  revstr(s1,0,strlen(s1)-1);
  for(i=0;i<strlen(s1);i++)
  {
    if(s1[i+1]==' ' || s1[i+1]=='\0')
    {
      revstr(s1,si,i);
      si=i+2;
    }
  }
  printf(s1);
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
  char s[]="123456789ab";
  int i,g=4,li;
  clrscr();
  for(i=0;i<strlen(s);i++)
  {
    li=getLastIndex(strlen(s),i,g);
    revstr(s,i,li);
    i=li;
  }
  printf(s);
  getch();
} */





int countChar(char s[],char ch,int ind)
{
  int k,c=0;
  for(k=ind;k<strlen(s);k++)
  {
    if(s[k]==ch)
    {
      c++;
    }
  }
  return c;
}
int checkChar(char s[],char ch,int index)
{
  int j;
  for(j=index;j>=0;j--)
  {
    if(s[j]==ch)
    {
      return 0;
    }
  }
   return 1;
  }
void main()
{
  char s[]="placement";
  int c,i;
  clrscr();
  for(i=0;i<strlen(s);i++)
  {
    if(checkChar(s,s[i],i-1)==1)
    {
      c=countChar(s,s[i],i);
      printf("%c ->%d\n",s[i],c);
    }
  }
  getch();
}
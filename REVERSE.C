void main()
{
  long int i=321663126,a,rev=0;
  clrscr();
  while(i!=0)
  {
     a=i%10;
     rev=rev*10+a;
     i=i/10;
  }
  printf("%ld",rev);
  getch();
}

/*void main()
{
  long int n=1234567,t;
  clrscr();
  while(n!=0)
  {
    t=n%10;
    printf("%ld",t);
    n=n/10;
  }
  getch();
}*/





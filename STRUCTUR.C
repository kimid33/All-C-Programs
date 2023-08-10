#include<stdio.h>
/*struct std{
 int roll;
 char name[20];
 char mob[12];
};

void main()
{
  struct std s;
  clrscr();
  s.roll=102;
  strcpy(s.name,"kimi");
  strcpy(s.mob,"234567789");
  printf("%d %s %s",s.roll,s.name,s.mob);
  getch();
}    */

struct std{
 int roll;
 char name[20];
 char mob[12];
};

void main()
{
  int i;
  struct std s[3];
  char name[]="abc";
  clrscr();
  printf("Enter 3 student detail\n");
  for(i=0;i<3;i++)
  {
    printf("Enter roll no: ");
    scanf("%d",&s[i].roll);

    printf("Enter name: ");
    scanf("%s",&s[i].name);

    printf("Enter mobile: ");
    scanf("%s",s[i].mob);
  }
   //printf("search by name ");
   //scanf("%s",&s[i].name);

  for(i=0;i<3;i++)
  {
    if(strcmp(s[i].name,name)==0)
    {
      printf("search by name: ");
      scanf("%s",&s[i].name);
      printf("%d, %s, %s\n",s[i].roll,s[i].name,s[i].mob);
      //scanf("%s",s[i].mob);
      //scanf("%d",&s[i].roll);
    }
    }
    getch();
}



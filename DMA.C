#include<stdio.h>
struct std
{
  char name[20];
  int roll;
  char mobile[12];
  char Class[20];
  struct std *next;
}*head=NULL;
void addStudent()
{
  struct std *s=(struct std*) malloc(sizeof(struct std));
  s->next = NULL;
  puts("Enter name");
  gets(s->name);
  puts("Enter roll number");
  scanf("%d",&s->roll);
  fflush(stdin);
  puts("Enter mobile");
  gets(s->mobile);
  puts("Enter class");
  gets(s->Class);
  if(head==NULL)
  {
    head = s;
  }
  else
  {
    struct std *t = head;
    while(t->next!=NULL)
    {
      t = t->next;
    }
    t->next = s;
  }
}

void show()
{
  struct std*s = head;
  while(s!=NULL)
  {
    printf("\n%d %s %s %s",s->roll,s->name,s->mobile,s->Class);
    s=s->next;
  }
}

void main()
{
  clrscr();
  addStudent();
  addStudent();
  show();
  getch();
}
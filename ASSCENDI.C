void main()
{
 int a[]={5,3,7,6,9,2,1,4,8};
 int size,i,j,temp;
 size=sizeof(a)/sizeof(int);
 clrscr();
 for(i=0;i<size;i++)
 {
   for(j=i+1;j<size;j++)
   {
     if(a[i]>a[j])
     {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
     }
   }
 }
   for(i=0;i<size;i++)
   {
     printf("%d ",a[i]);
   }
   getch();
}
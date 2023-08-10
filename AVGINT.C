void main(){
int num1,num2,num3,num4,num5;
float avg,sum;
clrscr();
printf("Enter Five Number For AVG:");
scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
sum=num1+num2+num3+num4+num5;
avg=sum/5;
printf("\nAVG OF %d+%d+%d+%d+%d=(%.2f)/%d=%.2f",num1,num2,num3,num4,num5,sum,5,avg);
getch();
}
/*void main()
{
int num*/
void main(){
float num1,num2,num3,num4,num5,avg,sum;
clrscr();
printf("Enter Five Number For AVG:");
scanf("%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5);
sum=num1+num2+num3+num4+num5;
avg=sum/5;
printf("\nAVG OF %.2f+%.2f+%.2f+%.2f+%.2f=(%.2f)/%d=%.2f",num1,num2,num3,num4,num5,sum,5,avg);
getch();
}
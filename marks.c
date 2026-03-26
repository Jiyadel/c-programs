
#include<stdio.h>
int main()
{
    int hindi,english,science,maths,computer,sum;
    float per;
    printf("Enter marks of hindi=");
    scanf("%d",&hindi);
    printf("Enter marks of english=");
    scanf("%d",&english);
    printf("Enter marks of science=");
    scanf("%d",&science);
    printf("Enter marks of maths=");
    scanf("%d",&maths);
    printf("Enter marks of computer=");
    scanf("%d",&computer);
    sum=hindi+english+science+maths+computer;
    printf("Sum of marks=%d",sum);
    per=(float)sum/5;
    printf("Percentage of marks=%f",per);
    return 0;
}
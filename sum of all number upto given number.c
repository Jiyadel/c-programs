#include<stdio.h>
int main()
{ 
    int n,sum=0,c,value;
    printf("How many no. you want to add?\n");
    scanf("%d",&n);
    printf("Enter %d integer\n",n);
    for(c=1;c<=n;c++);
    {
        scanf("%d",&value);
        sum =sum+value;
    }
    printf("Sum of the integers=%d\n",sum);
    return 0;
}
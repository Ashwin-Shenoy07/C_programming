#include<stdio.h>

void main()
{
    int num1,num2;  //if num1=25 & num2=55
    printf("enter two numbers for swapping: \n");
    scanf("%d %d",&num1,&num2);
    printf("\n before swapping: \n num1=%d and num2=%d",num1,num2);
    num1=num1+num2;  //num1=25+55 ...so 80 will be stored in num1.
    num2=num1-num2;  //num2=80-55 ...so 25 will be stored in num2.
    num1=num1-num2;  //num1=80-25 ...so 55 will be stored in num1.
    printf("\n After swapping : \n num1 = %d and num2= %d",num1,num2);
}

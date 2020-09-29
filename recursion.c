#include<stdio.h>

int sum_of_digit(int num)
{
    if(num==0)
        return 0;
    else
    return (num % 10 + sum_of_digit(num / 10));
}

void main()
{
    int number,result;
    printf("enter a number : ");
    scanf("%d",&number);
    result=sum_of_digit(number);
    printf("Sum of digits in %d is %d\n", number, result);

}

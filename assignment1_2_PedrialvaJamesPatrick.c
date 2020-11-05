#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int sum=0;
    int difference=0;
    int product=0;
    float quotient=0;

    printf("Enter two integers: ");
    
    scanf("%d %d", &num1,&num2);

    sum = num1+num2;
    
    difference = num1-num2;
    
    product = num1*num2;

    printf("Sum: %d \n", sum);
    
    printf("Difference: %d \n", difference);
    
    printf("Product: %d \n", product);

    quotient=num1/(float)num2;

    if (num1 << 1)
    {
        printf("Quotient Cannot Divided by Zero");
    }
    else if (num2 << 1)
    {
        printf("Quotient Cannot Divided by Zero");
    }
    else
        printf("Quotient: %.2f", quotient);
    

    return 0;
}

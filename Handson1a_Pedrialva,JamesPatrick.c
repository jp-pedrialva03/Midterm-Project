#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int sum;

    printf("Enter two numbers.\nIf their sum is greater than 100, then it's true. \nIf less than 100, then false.");
    
    printf("\n\nEnter first number: ");
    scanf("%d", &num1);
    
    printf("\nEnter second number: ");
    scanf("%d", &num2);

    sum = num1+num2;

    printf("\nFirst number is %d", num1);
    
    printf(", second number is %d.", num2);
    
    printf("\nThe sum of two number is %d.", sum);

    if (sum > 100)
    {
        printf("\nTrue, because the sum is greater than 100.\n\n\n\n\n\n\n");
    }
    else
    {
        printf("\n\nFalse, because the sum is less than or equal to 100.\n\n\n\n\n\n\n");
    }

 
}

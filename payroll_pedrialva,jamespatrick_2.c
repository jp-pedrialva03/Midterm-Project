#include<stdio.h>

int product(int x, int y)
{   
	int product;
	product = x * y;
	return product;
}
int main()

{
    int x,y,payroll;
    printf("Enter the no.of hours worked:");
    scanf("%d", &x);
    printf("Enter the salary per hour:");
    scanf("%d", &y);
    
    payroll = product(x,y);
    
    printf("\nNumber of hours worked: %d", x);
    printf("\nNumber of salary per hour: P%d", y);
    printf("\nYour payroll is a total of: P%d",payroll);
    
    return 0;
	
}

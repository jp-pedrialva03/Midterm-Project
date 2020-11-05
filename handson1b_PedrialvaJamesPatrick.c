#include <stdio.h>
int main()
{
	int n;
	int i;
	int sum;
	
	i=1;
	sum=0;
	printf("\nEnter the number that will sum the square:");
	scanf("%d",&n);
	while(i <=n)
	{
		sum = sum + i * i;
		+ + i;
	}
	printf("\nThe sum of all numbers squared of %d is:%d",n,sum);
	
	return 0;
}

#include <stdio.h>
#include <math.h>

int computerExponent ( int base, int exponent, long long result)
{
  printf("%d raised to the %d power is %lld", base, exponent, result);
  return 0;
}

int main()
{
  int base, exponent;
  long long result;

  printf("Enter the base number:");
  scanf("%d", &base);
  printf("Enter the exponent:");
  scanf("%d", &exponent);
  result = pow(base, exponent);
  computerExponent(base,exponent,result);

    return 0;
}

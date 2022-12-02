#include<stdio.h>
int main()
  {
    int C,K;
    float F;
    printf("Enter the temperature in celcius\n");
    scanf("%d", &C);
    F =C*9/5+32;
    K=C+273;
    printf("Temperature in ⁰F is: %f\n", F);
    printf("Temperature in Kelwin is: %d\n", K);
    return 0;
  }
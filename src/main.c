#include <stdio.h>
int main()
{
 float a,b,c;
 printf(" Enter the number%f , a\n");
 printf(" Enter the number %f, b\n");
 printf(" Enter the number , %fc\n");
 scanf("%f" , &a);
 scanf("%f" , &b);
 scanf("%f" , &c);
 printf("The result of operation is%f", a+b*c);
 return 0;
}
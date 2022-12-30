#include<stdio.h>
int main()
     {
       int i,j,n,k;
       printf("Enter the number of terms:\n");
       scanf("%d", &n);
       i=1;
       j=0;
       k=1;
       while(i<=n){
         while(k<=i){
          j=j+k*k;
          k++;
         }
         i++;
       }
       printf("The sum is: %d\n", j);
     }
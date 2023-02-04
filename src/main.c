#include<stdio.h>
int main(){
   int marks[10],i,j;
    printf("Enter the marks roll numberwise:\n");
    for(i=0;i<10;i++){
      printf("Enter the marks of roll no. %d\n", i+1);
      scanf("%d\n", &marks[i]);
    }
      for(i=0;i<10;i++){
        if(marks[i] < 35){
          printf("Roll no: %d is fail .\n", i+1);
        }
      }
      return 0;
}
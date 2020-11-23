#include<stdio.h>
int add(int a , int b);

int main() {
   int a, b, sum;
   printf("\nEnter two no: ");
   scanf("%d %d", &a, &b,&c);

   sum = a + b+c;

   printf("Sum : %d", sum);
   printf("sum with function%d",add(a,b));
   return(0);
}

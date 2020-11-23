#include<stdio.h>

int main() {
   int first, second, sum, num, counter = 0;

   printf("Enter the term : ");
   scanf("%d", &num);

   printf("\nEnter First Number : ");
   scanf("%d", &first);

   printf("\nEnter Second Number : ");
   scanf("%d", &second);

   printf("\nFibonacci Series : %d  %d  ", first, second);

   while (counter < num) {
      sum = first + second;
      printf("%d  ", sum);
      first = second;
      second = sum;
      counter++;
   }

   return (0);
}
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
	
#include<stdio.h>
 
int main() {
   int first, second, sum, num, counter = 0;
 
   printf("Enter the term : ");
   scanf("%d", &num);
 
   printf("\nEnter First Number : ");
   scanf("%d", &first);
 
   printf("\nEnter Second Number : ");
   scanf("%d", &second);
 
   printf("\nFibonacci Series : %d  %d  ", first, second);
 
   while (counter < num) {
      sum = first + second;
      printf("%d  ", sum);
      first = second;
      second = sum;
      counter++;
   }
 
   return (0);
}
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
	
#include<stdio.h>
#include<conio.h>
 
int fact(int);
 
int main() {
   int factorial, num;
 
   printf("Enter the value of num :");
   scanf("%d", &num);
 
   factorial = fact(num);
   printf("Factorial is %d", factorial);
 
   return (0);
}
 
int fact(int n) {
   if (n == 0) {
      return (1);
   }
   return (n * fact(n - 1));
}
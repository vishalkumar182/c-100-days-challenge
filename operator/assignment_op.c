#include<stdio.h>
int main()
{
   int a ,b,c;
   a =4;
   b=8;
   c = a + b; // addition
   //a+b=c; // assignment
   printf("c = %d\n", c);
   printf("a = %d, b = %d\n", a, b);
   return 0;
}//note lhs of assignment operator must be a single variable and rhs can be a single variable or an expression. The assignment operator assigns the value of the right-hand side expression to the left-hand side variable. In this code, we are adding the values of 'a' and 'b' and assigning the result to 'c'.
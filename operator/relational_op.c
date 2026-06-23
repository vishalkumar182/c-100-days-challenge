#include<stdio.h>
int main()
{
   int a ,b;
   a =4;
   b=8;
   printf("%d  \n%d \n",a>b,a<b);//prints 0,1
   printf("%d \n",a>=b);//prints 0
   printf("%d \n",a<=b);//prints 1
   printf("%d \n",a==b);//prints 0
    printf("%d",a!=b);//prints 1
    return 0;
    
}/*relational operators are used to compare two values and return a boolean value (true or false) based on the comparison. In this code,
 we are comparing the values of 'a' and 'b' using various relational operators and printing the results.*/
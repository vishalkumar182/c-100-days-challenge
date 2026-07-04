/*#include<stdio.h>
int main(){
    int x=2;
    if(x==2)printf("x is equal to 2\n");
    else printf("x is not equal to 2\n");}// online if else statement without braces
  */
 /*#include <stdio.h>

int main() {
    int number = 7;

    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }
}

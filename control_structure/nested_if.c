/*#include<stdio.h>
int main(){
    // if marks of a student in 2 subject is greater than 50 then print pass else fail
    int m1,m2;
    printf("Enter the  marks in both subject ");
    scanf("%d %d",&m1,&m2);
    if(m1>50){
        if (m2>50)
        {
            printf("pass");

        }
        else{
            printf("fail");
        }
       
    }
     else
        {
            printf("fail 2");
        }
}*/
//note avoid using nested if better use logical operator
/*#include<stdio.h>
int main(){
    int m1,m2;
    printf("Enter marks in both sublect :\n");
    scanf("%d %d",&m1 , &m2);
    if(m1>50 && m2>50 ){
        printf("pass\n");
    }
    else{
        printf("fail");
    }

}*/
/*#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Asking user for input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Outer if-else: Compare num1 and num2
    if (num1 >= num2) {
        // Inner if-else 1: num1 is greater or equal, now compare it with num3
        if (num1 >= num3) {
            max = num1;
        } else {
            max = num3;
        }
    } else {
        // Inner if-else 2: num2 is greater, now compare it with num3
        if (num2 >= num3) {
            max = num2;
        } else {
            max = num3;
        }
    }

    // Printing the final result
    printf("The maximum number is: %d\n", max);

    return 0;
}*/
#include <stdio.h>

int main() {
    int year = 1900;

    // Outer if: Must be divisible by 4
    if (year % 4 == 0) {
        
        // Second level: Check century rule
        if (year % 100 == 0) {
            
            // Third level: Check exceptional century rule
            if (year % 400 == 0) {
                printf("%d is a leap year.\n", year);
            } else {
                printf("%d is not a leap year.\n", year);
            }
            
        } else {
            printf("%d is a leap year.\n", year);
        }

    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

/*#include<stdio.h>
int main(){
    int x=2;
    while(x<5){
        printf("x is less than 5\n");
        x++;
    }
    return 0;
}*///while loop with braces
/*#include <stdio.h>

int main() {
    // 1. Initialize the loop counter variable
    int count = 5; 

    // 2. Check the condition (Is count greater than 0?)
    while (count > 0) {
        printf("Count is: %d\n", count);
        
        // 3. Decrement the counter to eventually break the loop
        count--; 
    }

    printf("Loop finished!\n");
    return 0;
}*/
#include <stdio.h>

int main() {
    int secret_pin = 1234;
    int entered_pin = 0;

    // The loop keeps running AS LONG AS the entered PIN is incorrect
    while (entered_pin != secret_pin) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin != secret_pin) {
            printf("Incorrect PIN. Try again!\n\n");
        }
    }

    printf("Access Granted! Welcome to your account.\n");
    return 0;
}

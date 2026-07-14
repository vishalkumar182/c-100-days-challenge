/*#include<stdio.h>
int main(){
    int x=2;
    while(x<5){
        printf("x is less than 5\n");
        x++;
    }
    return 0;
}*///while loop with braces
#include <stdio.h>

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
}

/*#include <stdio.h>

int main() {
    int day = 4;
    
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break; // Matches and prints
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 7: printf("Sunday\n"); break;
        default: printf("Invalid day number!\n");
    }
    return 0;
}*/
#include <stdio.h>

int main() {
    // 1 = Red, 2 = Yellow, 3 = Green
    int lightColor = 1; 

    switch (lightColor) {
        case 1:
            printf("Action: STOP!\n");
            break;
            
        case 2:
            printf("Action: SLOW DOWN!\n");
            break;
            
        case 3:
            printf("Action: GO!\n");
            break;
            
        default:
            printf("Action: Invalid signal. Proceed with caution.\n");
    }

    return 0;
}

// NEED of switch statement: The switch statement is used to execute one block of code among many options based on the value of a variable. It provides a cleaner and more readable way to handle multiple conditions compared to using multiple if-else statements. In this example, it allows us to print the name of the day corresponding to the integer value of 'day'.
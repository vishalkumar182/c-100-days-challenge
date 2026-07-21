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
/*#include <stdio.h>

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
}*/

// NEED of switch statement: The switch statement is used to execute one block of code among many options based on the value of a variable. It provides a cleaner and more readable way to handle multiple conditions compared to using multiple if-else statements. In this example, it allows us to print the name of the day corresponding to the integer value of 'day'.
/*#include <stdio.h>
int main(){
    int x =3;
    switch (x)
    {
    case 1:
        printf("januray");
        break;
    
    default:
    printf("invalid");
        break;
     case 2:
        printf("feburary");
        break;
        case 3:
        printf("march");   
    }
}*/
/*#include <stdio.h>
int main(){
    int x =3;
    switch (x)
    {
    case 3:
        printf("JAN\n");
        
    
    default:
    printf("Invalid..");
        break;
     case 2:
        printf("feburary");
        break;
        case 1:
        printf("march");   
    }
}*/
/*#include <stdio.h>
int main() {
    int level = 1; // User access level
    switch (level) {
        case 1:
            printf("Access View\n");
        case 2:
            printf("Access Edit\n");
        case 3:
            printf("Access Admin\n");
    }
}*/
//  Since there are no break statements, all cases from the matched case (case 1) down to the end will execute.
/*#include <stdio.h>
int main() {
    int x = 5;
    switch (x) {
        default: 
            printf("Unknown value!\n");
            break; // The default case doesn't need to be at the bottom. The code evaluates default only if no other cases match.
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
    }
}*/
/*#include <stdio.h>
int main() {
    int month = 2; // e.g., February
    switch (month) {
        case 12: case 1: case 2://muliple case labels can be used to group cases that should execute the same block of code
            printf("Winter\n");
            break;
        case 3: case 4: case 5:
            printf("Spring\n");
            break;
        default:
            printf("Invalid month");
    }
}*/

#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.00; // Initial bank balance
    float amount;

    // PIN Authentication Setup
    int pin = 1234;
    int enteredPin;

    printf("Welcome to the ATM!\n");
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    // If the PIN is incorrect, the program terminates immediately
    if (enteredPin != pin) {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }

    // The do-while loop keeps the menu running until the user selects 'Exit' (Option 4)
    do {
        printf("\n=========================\n");
        printf("       ATM MENU          \n");
        printf("=========================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        // Handling user selection using switch-case
        switch(choice) {
            case 1:
                printf("\nYour current balance is: $%.2f\n", balance);
                break;
            
            case 2:
                printf("\nEnter amount to deposit: $");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount; // Adding deposited money to the balance
                    printf("Success! You have deposited $%.2f\n", amount);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            
            case 3:
                printf("\nEnter amount to withdraw: $");
                scanf("%f", &amount);
                // Validation to check if the account has enough funds
                if (amount > 0 && amount <= balance) {
                    balance -= amount; // Deducting withdrawn money from the balance
                    printf("Success! Please collect your cash: $%.2f\n", amount);
                } else if (amount > balance) {
                    printf("Error: Insufficient funds!\n");
                } else {
                    printf("Invalid withdrawal amount!\n");
                }
                break;
            
            case 4:
                printf("\nThank you for using the ATM. Goodbye!\n");
                break;
            
            default:
                printf("\nInvalid choice! Please select a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

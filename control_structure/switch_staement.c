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
#include <stdio.h>
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
}
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


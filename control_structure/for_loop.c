/*#include <stdio.h>

int main() {
    // Basic syntax: print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("Number: %d\n", i);
    }
    return 0;
}*/
/*#include <stdio.h>

int main() {
    printf("Counting down even numbers:\n");
    // Start at 10, stop when i falls below 0, subtract 2 each time
    for (int i = 10; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}*/
/*#include <stdio.h>

int main()
{
    for(int i = 2; i <= 20; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}*/ 
//Level 2: Logic Building

//Example 5: Sum of numbers 1 to n
/*INPUT: 5
CALCULATION: 1 + 2 + 3 + 4 + 5 = 15
OUTPUT: 15*/
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d",sum);

    return 0;
}
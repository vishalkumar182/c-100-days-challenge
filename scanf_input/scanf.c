/*#include <stdio.h> // Yeh computer ko printf aur scanf ka matlab samjhati hai

int main() {
    int age; // 1. Humne ek khali dabba banaya jiska naam rakha 'age'

    // 2. Computer screen par poochega
    printf("Enter your age: "); 

    // 3. Aap jo keyboard se type karoge, wo 'age' wale dabbe mein chala jayega
    scanf("%d", &age); 

    // 4. Computer ab screen par dikhayega aapne kya enter kiya
    printf("Wow! Your age is %d years old.", age); 

    return 0;
}*/
#include <stdio.h>

int main() {
    // 1. Dabbe (Variables) taiyar kiye
    int rollNo;
    float percentage;
    char grade;

    // 2. Roll Number ka input liya
    printf("Hey! Enter your Roll Number:\n");
    scanf("%d", &rollNo);

    // 3. Percentage ka input liya
    printf("Enter your Percentage (e.g., 85.5):\n");
    scanf("%f", &percentage);

    // 4. Grade ka input liya (Notice karo %c ke pehle ka space)
    printf("Enter your Grade (A, B, C):\n");
    scanf(" %c", &grade);

    printf("\n--- GENERATING REPORT CARD ---\n");
    
    // 5. Saare variations ko use karke print kiya
    // \t se sundar spacing aayegi aur %.2f se percentage sahi dikhegi
    printf("Roll No:\t%d\n", rollNo);
    printf("Percentage:\t%.2f%%\n", percentage); // %% likhne se screen par % ka sign chhapta hai
    printf("Final Grade:\t%c\n", grade);

    return 0;
}
#include <stdio.h> // Yeh computer ko printf aur scanf ka matlab samjhati hai

int main() {
    int age; // 1. Humne ek khali dabba banaya jiska naam rakha 'age'

    // 2. Computer screen par poochega
    printf("Enter your age: "); 

    // 3. Aap jo keyboard se type karoge, wo 'age' wale dabbe mein chala jayega
    scanf("%d", &age); 

    // 4. Computer ab screen par dikhayega aapne kya enter kiya
    printf("Wow! Your age is %d years old.", age); 

    return 0;
}
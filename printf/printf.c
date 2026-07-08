/*#include<stdio.h>
int main() {
    printf("hi vishal how are you\n");//anything inside double quotes will be printed on the screen
    int score = 100;
    
    printf("Score hai: %d", score); // %d acts a placeholder where we can put the value of variable
    printf("\n");
    return 0;

}*/
//syntax:
// printf("message + format string", variable1, variable2, ...);
#include <stdio.h>

int main() {
    // === 1. DATA TYPES & VARIABLES (Dabbe banana) ===
    int age = 21;                  // Pura number store karne ke liye dabba
    float weight = 65.457;         // Point wala number store karne ke liye dabba
    char star = 'A';               // Ek single letter store karne ke liye dabba

    printf("=== PRINTF VARIATION MASTER CODE ===\n\n");

    // === VARIATION A: Simple Text & Escape Sequences (\n, \t) ===
    // Concept: \n cursor ko agli line par bhejta hai, \t lamba space deta hai.
    printf("Line 1: Hello Bhai!\nLine 2: Kaise ho?\n"); 
    printf("Naam:\tRahul\tCity:\tDelhi\n\n");


    // === VARIATION B: Printing Variables (%d, %f, %c) ===
    // Concept: %d,%f,%c khidkiyan (placeholders) hain jahan variables ki value aakar baithti hai.
    printf("Umar: %d saal\n", age);
    printf("Wazan: %f kg\n", weight); // By default, point ke baad 6 zero dikhayega
    printf("Star Character: %c\n\n", star);


    // === VARIATION C: Controlling Decimals (%.2f) ===
    // Concept: %f ke beech mein .2 lagane se point ke baad sirf 2 digits dikhenge (Round-off karke).
    printf("Wazan (Sunder Format): %.2f kg\n", weight); // 65.457 ban jayega 65.46
    printf("Wazan (Sirf 1 digit): %.1f kg\n\n", weight);  // 65.457 ban jayega 65.5


    // === VARIATION D: Direct Math Calculations Inside Printf ===
    // Concept: printf pehle "" ke baahar ka math solve karta hai, fir use %d ki jagah bitha deta hai.
    printf("Agli saal umar hogi: %d\n", age + 1); 
    printf("Dono ka total (Math): %.2f\n\n", age + weight);


    // === VARIATION E: Multiple Variables in One Line (Mapping) ===
    // Concept: Jis line se %d aur %c aayenge, usi line se baahar ke variables mapping hokar wahan baithenge.
    printf("Bhai ki umar %d hai aur weight %.1f kg hai.\n\n", age, weight);


    // === VARIATION F: Special Symbols (%%) ===
    // Concept: Screen par single '%' print karne ke liye do baar '%%' likhna padta hai.
    printf("Download Status: 100%%\n");

    return 0;
}
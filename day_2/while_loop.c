/*#include<stdalign.h>
int main(){
    int i=1, sum=0;
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("Sum of first 10 natural numbers is: %d", sum);
    return 0;
}*/
//reverse order
/*#include<stdio.h>
int main(){
    int i=10, sum=0;
    while(i>=0){
        sum+=i;
        i--;
    }
    printf("Sum of first 10 natural numbers is: %d", sum);
    return 0;
}*/
//move by 2
#include<stdio.h> 
int main(){
    int i=0, sum=0;
    while(i<=20){
        sum+=i;
        i+=2;
    }
    printf("Sum of first 10 natural numbers is: %d", sum);
    return 0;
}
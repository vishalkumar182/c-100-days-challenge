/*#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=10;i++){
        printf(" %d",i);
        
    }
    return 0;
}*/
//reverse order

/*#include<stdio.h>
int main(){
    int i;
    for(i=10;i>=0;i--){
        printf(" %d",i);
        
    }
    return 0;
}*/

//move by 2
/*#include<stdio.h>
int main(){
    int i;
    for(i=0;i<=20;i+=2){
        printf(" %d",i);
        
    }
    return 0;
}*/
//sum of first 10 natural numbers
#include<stdio.h>
int main(){
    int i, sum=0;
    for(i=1;i<=10;i++){
        sum+=i;
    }
    printf("Sum of first 10 natural numbers is: %d", sum);
    return 0;
}